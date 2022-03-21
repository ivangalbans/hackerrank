-- https://www.hackerrank.com/challenges/asian-population/problem

SELECT SUM(City.population)
       FROM City JOIN Country ON City.countrycode = Country.code
       WHERE Country.continent = 'Asia';
