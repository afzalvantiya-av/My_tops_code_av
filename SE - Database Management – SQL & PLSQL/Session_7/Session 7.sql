create table restaurant1
(id int(11) auto_increment primary key, name varchar(100) not null, location varchar(255) not null, cuisine varchar(255));

create table foodorder
(order_id int(11) auto_increment primary key, restaurant_id int(11), user_id int(11), order_total int(11),
foreign key(restaurant_id) references restaurant1(id));

create table spotifyUser
(user_id int primary key auto_increment, user_name varchar(100) unique, email varchar(100) not null, subscription_type varchar(100));

insert into spotifyUser
(user_name, email, subscription_type)
values
('Afzalvantiya', 'afzalvantiya@example.com', 'Premium plan'),
('Hadirazavasaya', 'hadiraza@example.com', 'Basic plan'),
('mohammadsunasara', 'mohammadsunasara@example.com', 'Monthly plan'),
('ranbir_kapoor', 'ranbir@example.com', 'Free Plan'),
('king', 'king@example.com', 'Premium Plan'),
('k_l_rahul', 'rahul@example.com', 'Yearly plan');

insert into foodorder
(user_id, order_total)
values
(501,4000),
(502, 2500),
(503, 5000);

create view topSpendersView as
select foodorder.user_id, foodorder.order_total
from foodorder where order_total > 1000;

select * from topspendersview where order_total > 2000
order by order_total desc;

insert into foodorder
(user_id, order_total)
values
(510,450);