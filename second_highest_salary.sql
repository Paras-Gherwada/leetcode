# Write your MySQL query statement below
Select max(salary) as SecondHighestSalary from Employee Where Salary < (select max(salary) from Employee) 
