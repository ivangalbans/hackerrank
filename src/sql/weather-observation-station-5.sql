-- https://www.hackerrank.com/challenges/weather-observation-station-5/problem

SELECT city, LENGTH(city) FROM Station ORDER BY LENGTH(city), city LIMIT 1;
SELECT city, LENGTH(city) FROM Station ORDER BY LENGTH(city) DESC, city LIMIT 1;
