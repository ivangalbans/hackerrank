-- https://www.hackerrank.com/challenges/weather-observation-station-10/problem

SELECT DISTINCT city FROM Station WHERE city REGEXP '[^aeiou]$';
