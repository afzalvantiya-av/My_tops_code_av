CREATE TABLE orders (order_id INT AUTO_INCREMENT PRIMARY KEY, restaurant_id INT, customer_name VARCHAR(100), total_amount DECIMAL(10,2), order_date DATE);

INSERT INTO orders (restaurant_id, customer_name, total_amount, order_date)
VALUES
(1, 'Afzal', 1200, '2026-11-01'),
(1, 'hadi', 1500, '2026-11-02'),
(1, 'agam', 1800, '2026-11-03'),

(2, 'Ms', 2000, '2026-11-04'),
(2, 'Karan', 1000, '2026-11-05'),
(2, 'Raj', 1500, '2026-11-06'),

(4, 'rahul', 2500, '2026-11-07'),
(4, 'Jay', 2000, '2026-11-08'),
(4, 'Ravi', 1800, '2026-11-09'),

(5, 'Ankit', 900, '2026-11-10'),
(5, 'Pooja', 1200, '2026-11-11'),
(5, 'Sahil', 1400, '2026-11-12');

SELECT restaurant_id, sum(total_amount) AS total_revenue, AVG(total_amount) AS average_order_value
FROM orders GROUP BY restaurant_id;

SELECT restaurant_id, SUM(total_amount) AS total_revenue
FROM orders
GROUP BY restaurant_id HAVING SUM(total_amount) > 5000;

SELECT * FROM orders ORDER BY order_date DESC LIMIT 5;