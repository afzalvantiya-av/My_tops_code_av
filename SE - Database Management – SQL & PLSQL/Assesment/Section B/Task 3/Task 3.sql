CREATE DATABASE foodapp_join_db;

CREATE TABLE restaurants(restaurant_id INT PRIMARY KEY, name VARCHAR(100), city VARCHAR(50));

CREATE TABLE menu_items(item_id INT PRIMARY KEY, restaurant_id INT, item_name VARCHAR(100), price DECIMAL(10,2), category VARCHAR(50), FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id));

INSERT INTO restaurants
VALUES
(1, 'Spice Villa', 'Ahmedabad'),
(2, 'Pizza Palace', 'Surat'),
(3, 'Burger Hub', 'Rajkot'),
(4, 'Royal Kitchen', 'Ahmedabad'),
(5, 'Food Junction', 'Vadodara');

INSERT INTO menu_items
VALUES
(101, 1, 'Paneer Tikka', 250, 'Starter'),
(102, 1, 'Veg Thali', 180, 'Main Course'),
(103, 1, 'Gulab Jamun', 80, 'Dessert'),

(104, 2, 'Margherita Pizza', 300, 'Pizza'),
(105, 2, 'Cheese Pizza', 400, 'Pizza'),
(106, 2, 'Garlic Bread', 150, 'Starter'),

(107, 3, 'Veg Burger', 120, 'Burger'),
(108, 3, 'Cheese Burger', 180, 'Burger'),

(109, 4, 'Dal Makhani', 220, 'Main Course'),
(110, 4, 'Butter Roti', 30, 'Main Course'),
(111, 4, 'Ice Cream', 100, 'Dessert'),

(112, 2, 'Cold Coffee', 120, 'Beverage');

SELECT r.name AS restaurant_name, m.item_name, m.price
FROM restaurants r INNER JOIN menu_items m
ON r.restaurant_id = m.restaurant_id;

SELECT r.name AS restaurant_name, m.item_name, m.price
FROM restaurants r LEFT JOIN menu_items m
ON r.restaurant_id = m.restaurant_id;

CREATE VIEW restaurant_menu_summary AS
SELECT r.name AS restaurant_name, COUNT(m.item_id) AS total_menu_items, AVG(m.price) AS average_item_price
FROM restaurants r
LEFT JOIN menu_items m ON r.restaurant_id = m.restaurant_id
GROUP BY r.restaurant_id, r.name;

SELECT * FROM restaurant_menu_summary;