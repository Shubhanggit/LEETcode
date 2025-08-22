# Write your MySQL query statement below
delete P1 from Person as P1
Join Person as P2
On P1.email = P2.email
where P1.id> P2.id;