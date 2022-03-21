-- https://www.hackerrank.com/challenges/more-than-75-marks/problem

SELECT name FROM Students WHERE marks > 75 ORDER BY RIGHT(name, 3), id;
