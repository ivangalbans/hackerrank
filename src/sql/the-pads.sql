-- https://www.hackerrank.com/challenges/the-pads/problem

SELECT CONCAT(name, '(', SUBSTR(occupation, 1, 1), ')')
       FROM Occupations
       ORDER BY name;

SELECT CONCAT('There are a total of', ' ', COUNT(occupation), ' ', LOWER(occupation), 's.')
       FROM Occupations
       GROUP BY occupation
       ORDER BY 1;
