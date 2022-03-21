-- https://www.hackerrank.com/challenges/weather-observation-station-14/problem

SELECT TRUNCATE(MAX(lat_n), 4) FROM STATION WHERE lat_n < 137.2345;
