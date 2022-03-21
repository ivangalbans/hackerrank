-- https://www.hackerrank.com/challenges/weather-observation-station-15/problem

SELECT ROUND(long_w, 4) FROM Station WHERE lat_n = (SELECT MAX(lat_n) FROM Station WHERE lat_n < 137.2345);
