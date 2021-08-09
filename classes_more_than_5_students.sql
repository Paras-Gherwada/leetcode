# Write your MySQL query statement below

select `c`.`class` from `courses` `c` group by `c`.`class` HAVING (COUNT(DISTINCT STUDENT) > 4);
