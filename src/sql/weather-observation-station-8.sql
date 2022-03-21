-- https://www.hackerrank.com/challenges/weather-observation-station-8/problem

SELECT DISTINCT city FROM Station where CITY REGEXP '^[aeiou].*[aeiou]$';
