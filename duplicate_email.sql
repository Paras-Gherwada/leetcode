# Write your MySQL query statement below

select `p`.`Email` from `Person` `p` group by `p`.`Email` HAVING COUNT(`p`.`Email`) > 1;
