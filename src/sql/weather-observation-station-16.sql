-- https://www.hackerrank.com/challenges/weather-observation-station-16/problem

SELECT ROUND(MIN(lat_n), 4) FROM Station WHERE lat_n > 38.7880;
