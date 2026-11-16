CREATE DATABASE food_order_db;

CREATE TABLE customers(customer_id INT PRIMARY KEY, customer_name VARCHAR(100), wallet_balance DECIMAL(10,2));

CREATE TABLE restaurants(restaurant_id INT PRIMARY KEY, name VARCHAR(100));

CREATE TABLE orders(order_id INT AUTO_INCREMENT PRIMARY KEY, customer_id INT, restaurant_id INT, amount DECIMAL(10,2), order_date DATE);

INSERT INTO customers VALUES
(1, 'Rahul', 5000),
(2, 'Amit', 1000);

INSERT INTO restaurants
VALUES
(101, 'Spice Villa'),
(102, 'Pizza Palace');

DELIMITER //

CREATE PROCEDURE place_order(
    IN p_customer_id INT,
    IN p_restaurant_id INT,
    IN p_amount DECIMAL(10,2)
)
BEGIN
    DECLARE v_balance DECIMAL(10,2);

    DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN
        ROLLBACK;
        RESIGNAL;
    END;

    START TRANSACTION;

    SELECT wallet_balance
    INTO v_balance
    FROM customers
    WHERE customer_id = p_customer_id
    FOR UPDATE;

    IF v_balance IS NULL THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Customer not found';

    ELSEIF v_balance < p_amount OR p_amount <= 0 THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Insufficient wallet balance or invalid amount';

    ELSE
        UPDATE customers
        SET wallet_balance = wallet_balance - p_amount
        WHERE customer_id = p_customer_id;

        INSERT INTO orders
        (customer_id, restaurant_id, amount, order_date)
        VALUES
        (p_customer_id, p_restaurant_id, p_amount, CURDATE());

        COMMIT;
    END IF;

END //

DELIMITER ;

CALL place_order(1, 101, 500);

CALL place_order(2, 102, 2000);

