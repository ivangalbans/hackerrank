-- https://www.hackerrank.com/challenges/earnings-of-employees/problem

SELECT salary * months, count(*) FROM Employee GROUP BY 1 ORDER BY 1 DESC LIMIT 1;
