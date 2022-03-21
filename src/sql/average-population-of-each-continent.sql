-- https://www.hackerrank.com/challenges/average-population-of-each-continent/problem

SELECT Country.continent, FLOOR(AVG(City.population))
       FROM City JOIN Country ON City.countrycode = Country.code
       GROUP BY 1;
