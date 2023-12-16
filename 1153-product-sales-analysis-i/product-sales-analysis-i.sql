# Write your MySQL query statement below
select product_name, year, price
from
product as p
right join sales as s
on p.product_id = s.product_id