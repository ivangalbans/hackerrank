-- https://www.hackerrank.com/challenges/occupations/problem

SELECT D.name, P.name, S.name, A.name
       FROM            (SELECT name, row_number() over (PARTITION by occupation ORDER BY name) id FROM Occupations WHERE occupation = 'Doctor')    D
       FULL OUTER JOIN (SELECT name, row_number() OVER (PARTITION by occupation ORDER BY name) id FROM Occupations WHERE occupation = 'Professor') P on D.id = P.id
       FULL OUTER JOIN (SELECT name, row_number() OVER (PARTITION by occupation ORDER BY name) id FROM Occupations WHERE occupation = 'Singer')    S on P.id = S.id
       FULL OUTER JOIN (SELECT Name, row_number() OVER (PARTITION by occupation ORDER BY name) id FROM Occupations WHERE occupation = 'Actor')     A on S.id = A.id;
