
USE food_delivery_capstone;

DELIMITER //

CREATE PROCEDURE restaurant_monthly_summary(
    IN p_restaurant_id INT,
    IN p_month INT
)
BEGIN

    -- Check valid month
    IF p_month < 1 OR p_month > 12 THEN

        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Invalid month. Enter 1 to 12';

    ELSEIF NOT EXISTS (
        SELECT 1
        FROM restaurants
        WHERE restaurant_id = p_restaurant_id
    ) THEN

        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Restaurant not found';

    ELSE

        SELECT
            r.restaurant_id,
            r.name AS restaurant_name,

            CASE
                WHEN COUNT(o.order_id) = 0
                THEN 'No orders found for this month'
                ELSE 'Summary generated successfully'
            END AS message,

            COUNT(o.order_id) AS total_orders,

            COALESCE(SUM(o.total_amount), 0)
            AS total_revenue,

            COALESCE(AVG(o.total_amount), 0)
            AS average_order_value

        FROM restaurants r

        LEFT JOIN orders o
            ON r.restaurant_id = o.restaurant_id
            AND MONTH(o.order_date) = p_month
            AND YEAR(o.order_date) = YEAR(CURDATE())

        WHERE r.restaurant_id = p_restaurant_id

        GROUP BY r.restaurant_id, r.name;

    END IF;

END //

DELIMITER ;

CALL restaurant_monthly_summary(1, 11);

CALL restaurant_monthly_summary(2, 11);

CALL restaurant_monthly_summary(1, 12);