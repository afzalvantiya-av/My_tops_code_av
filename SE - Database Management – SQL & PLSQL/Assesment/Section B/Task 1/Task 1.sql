CREATE DATABASE foodapp_db;

CREATE TABLE restaurants (restaurant_id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100) NOT NULL, city VARCHAR(50), cuisine_type VARCHAR(50), rating DECIMAL(3,1));

INSERT INTO restaurants (name, city, cuisine_type, rating)
VALUES
('Spice Villa', 'Ahmedabad', 'Indian', 4.5),
('Pizza Palace', 'Surat', 'Italian', 4.2),
('Burger Hub', 'Rajkot', 'Fast Food', 4.0),
('Royal Kitchen', 'Ahmedabad', 'Punjabi', 4.6),
('Food Junction', 'Surat', 'Chinese', 4.1),
('Tasty Bites', 'Vadodara', 'Indian', 4.3);

UPDATE restaurants SET rating = 4.7 WHERE restaurant_id = 1;

DELETE FROM restaurants WHERE restaurant_id = 3;

SELECT * FROM restaurants ORDER BY rating Desc;