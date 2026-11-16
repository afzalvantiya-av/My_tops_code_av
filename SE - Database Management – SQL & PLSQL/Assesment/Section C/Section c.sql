CREATE DATABASE food_delivery_capstone;

CREATE TABLE restaurants(restaurant_id INT PRIMARY KEY AUTO_INCREMENT,
name VARCHAR(100) NOT NULL,
city VARCHAR(50) NOT NULL,
cuisine_type VARCHAR(50),
created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE menu_items(item_id INT PRIMARY KEY AUTO_INCREMENT,
restaurant_id INT NOT NULL,
item_name VARCHAR(100) NOT NULL,
price DECIMAL(10,2) NOT NULL,
category VARCHAR(50),

FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id));

CREATE TABLE orders(order_id INT PRIMARY KEY AUTO_INCREMENT,
customer_name VARCHAR(100) NOT NULL,
restaurant_id INT NOT NULL,
item_id INT NOT NULL,
quantity INT NOT NULL,
total_amount DECIMAL(10,2) NOT NULL,
order_date DATE,

FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id),

FOREIGN KEY (item_id) REFERENCES menu_items(item_id));

INSERT INTO restaurants (name, city, cuisine_type)
VALUES
('Spice Villa', 'Ahmedabad', 'Indian'),
('Pizza Palace', 'Surat', 'Italian'),
('Burger Hub', 'Rajkot', 'Fast Food');

INSERT INTO menu_items(restaurant_id, item_name, price, category)
VALUES
(1, 'Paneer Tikka', 250, 'Starter'),
(1, 'Veg Thali', 180, 'Main Course'),
(1, 'Gulab Jamun', 80, 'Dessert'),
(1, 'Cold Coffee', 120, 'Beverage'),

(2, 'Margherita Pizza', 300, 'Main Course'),
(2, 'Cheese Pizza', 400, 'Main Course'),
(2, 'Garlic Bread', 150, 'Starter'),
(2, 'Brownie', 100, 'Dessert'),

(3, 'Veg Burger', 120, 'Main Course'),
(3, 'Cheese Burger', 180, 'Main Course'),
(3, 'French Fries', 100, 'Starter'),
(3, 'Cold Coffee', 120, 'Beverage');

INSERT INTO orders
(customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
VALUES
('Rahul', 1, 1, 2, 500, '2026-11-01'),
('Amit', 1, 2, 2, 360, '2026-11-02'),
('Priya', 1, 3, 3, 240, '2026-11-03'),
('Neha', 1, 4, 2, 240, '2026-11-04'),
('Raj', 1, 1, 1, 250, '2026-11-05'),

('Karan', 2, 5, 2, 600, '2026-11-06'),
('Mehul', 2, 6, 1, 400, '2026-11-07'),
('Jay', 2, 7, 2, 300, '2026-11-08'),
('Ravi', 2, 8, 3, 300, '2026-11-09'),
('Pooja', 2, 5, 1, 300, '2026-11-10'),

('Ankit', 3, 9, 2, 240, '2026-11-11'),
('Sahil', 3, 10, 1, 180, '2026-11-12'),
('Nisha', 3, 11, 2, 200, '2026-11-13'),
('Vijay', 3, 12, 2, 240, '2026-11-14'),
('Krishna', 3, 9, 3, 360, '2026-11-15');

CREATE VIEW restaurant_sales_summary AS
SELECT r.name AS restaurant_name, COUNT(o.order_id) AS total_orders, COALESCE(SUM(o.total_amount), 0) AS total_revenue
FROM restaurants r
LEFT JOIN orders o
ON r.restaurant_id = o.restaurant_id GROUP BY r.restaurant_id, r.name;

SELECT * FROM restaurant_sales_summary;

DELIMITER //

CREATE PROCEDURE add_order(
    IN p_customer_name VARCHAR(100),
    IN p_restaurant_id INT,
    IN p_item_id INT,
    IN p_quantity INT
)
BEGIN
    DECLARE v_price DECIMAL(10,2);
    DECLARE v_total DECIMAL(10,2);
    DECLARE v_restaurant_id INT;

    DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN
        ROLLBACK;
        RESIGNAL;
    END;

    START TRANSACTION;

    SELECT restaurant_id
    INTO v_restaurant_id
    FROM restaurants
    WHERE restaurant_id = p_restaurant_id;

    IF v_restaurant_id IS NULL THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Restaurant does not exist';
    END IF;

    IF p_quantity <= 0 THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Quantity must be greater than zero';
    END IF;

    SELECT price
    INTO v_price
    FROM menu_items
    WHERE item_id = p_item_id
    AND restaurant_id = p_restaurant_id;

    IF v_price IS NULL THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Menu item not found for this restaurant';
    END IF;

    SET v_total = v_price * p_quantity;

    INSERT INTO orders
    (customer_name, restaurant_id, item_id,
     quantity, total_amount, order_date)
    VALUES
    (p_customer_name, p_restaurant_id, p_item_id,
     p_quantity, v_total, CURDATE());

    COMMIT;

END //

DELIMITER ;

CALL add_order('Afzal', 1, 1, 2);

CREATE TABLE order_audit(audit_id INT PRIMARY KEY AUTO_INCREMENT, order_id INT, restaurant_id INT, action VARCHAR(20), log_time DATETIME);

DELIMITER //

CREATE TRIGGER after_order_insert
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    INSERT INTO order_audit
    (order_id, restaurant_id, action, log_time)
    VALUES
    (NEW.order_id, NEW.restaurant_id,
     'INSERT', NOW());
END //

DELIMITER ;

CALL add_order('Rahul', 2, 5, 2);