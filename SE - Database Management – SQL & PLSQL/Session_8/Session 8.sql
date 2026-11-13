delimiter $$
create procedure students()
begin
declare user_name varchar(20);
declare user_age int;
set user_name = 'virat_kohli05';
set user_age = 38;
select user_name as name , user_age as age;
end $$
delimiter ;

call students();

delimiter $$
create procedure orders(in order_amount int)
begin 
declare order_print varchar(100);
if order_amount > 500 then
set order_print = 'eligible for free delivery';
else
set order_print = 'delivery charges apply';
end if;
select order_amount as amount, order_print as message;
end $$
delimiter ;

call orders(700);
call orders(350);

delimiter $$
create procedure count_num(in max_num int)
begin 
declare counter int default 1;
while counter <= max_num do
select counter as numbers;
set counter = counter + 1;
end while;
select order_amount as amount, order_print as message;
end $$
delimiter ;

call count_num(5);

delimiter $$
create procedure product()
begin
select product_name as products from products;
end $$
delimiter ;

call product();

delimiter $$
create procedure divide_num(num1 int, num2 int)
begin
declare result_num decimal(10,2);
if num2 = 0 then
select 'can not divide by zero' as message;
else 
set result_num = num1/num2;
end if;
select result_num as result;
end $$
delimiter ;

call divide_num(100, 0);
call divide_num(100,5);