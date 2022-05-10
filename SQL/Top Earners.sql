select max(months*salary),count(months*salary) from employee where months*salary in (select max(months*salary) from employee);

-- SELECT salary * months AS earnings, COUNT(*)
-- FROM Employee
-- GROUP BY earnings
-- ORDER BY earnings DESC
-- LIMIT 1;