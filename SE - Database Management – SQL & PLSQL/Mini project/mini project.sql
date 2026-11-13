drop table playlists;

create table playlists
(playlist_id int primary key, user_id int , name varchar(255), created_at datetime);

insert into playlists
(playlist_id, user_id, name, created_at)
values
(1001, 1, 'Workout Mix', '2026-11-06 15:37:00'),
(1002, 2, 'Chill Vibes', '2026-11-06 15:37:00'),
(1003, 1, 'Top Hits', '2026-11-06 15:37:00');

update playlists set name = 'Evening chill' where name = 'chill vibes' and user_id = 2; 

delete from playlists where name = 'Workout Mix';

delimiter $$
create procedure GetMonthlyPlaylistCount(in newuser_id int, month int, out total_count int)
begin
select count(*) into total_count from playlists 
where user_id = newuser_id and month(created_at) = month;
end $$
delimiter ;

call GetMonthlyPlaylistCount(2, 11, @total);

select @total as total_playlists;