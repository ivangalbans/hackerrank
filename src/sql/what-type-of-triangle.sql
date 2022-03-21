-- https://www.hackerrank.com/challenges/what-type-of-triangle/problem

SELECT CASE
            WHEN a + b > c AND b + c > a AND a + c > b THEN
                CASE
                    WHEN a = b AND b = c          THEN 'Equilateral'
                    WHEN a = b OR  b = c OR a = c THEN 'Isosceles'
                    ELSE 'Scalene'
                END
            ELSE 'Not A Triangle'
        END
FROM Triangles;
