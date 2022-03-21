-- https://www.hackerrank.com/challenges/weather-observation-station-13/problem

SELECT TRUNCATE(SUM(lat_n), 4) FROM Station WHERE 38.7880 < lat_n AND lat_n < 137.2345;
