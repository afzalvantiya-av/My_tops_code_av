create table orders1 (user_id int primary key auto_increment, transaction int(11));

insert into orders1
(user_id, transaction)
values
(6, 10000),
(10, 2000),
(13, 20000);

start transaction;

update orders1 set transaction = transaction - 5000 where order_id = 13;

commit;

start transaction;

create table orderItems 
(order_id int primary key auto_increment, item_name varchar(100), payment int(11));

insert into orderItems 
(item_name, payment)
values
('burger', 100),
('sandwich', 200);

rollback;

start transaction;

insert into cart
(product_name, price)
values
('samsung mobile', 50000),
('mobile charger', 3500);

savepoint sp1;

insert into cart 
(product_name, price)
values
('polo tshirt', 2500);

rollback to sp1;

commit;

delimiter $$
create trigger deduct_amount
after insert on payments
for each row
begin
update wallet
set total_amount = total_amount - new.amount
where user_id = new.user_id;
end $$
delimiter ; 

insert into payments
(amount, payment_date)
values
(500, '2026-11-26'),
(10000, '2026-12-25');