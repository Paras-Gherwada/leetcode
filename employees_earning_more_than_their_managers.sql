# Write your MySQL query statement below

Select `E1`.`Name` as `Employee` from `Employee` `E1` where `E1`.`Salary` > (Select `Salary` from `Employee` where `Id`=`E1`.`ManagerId`);
