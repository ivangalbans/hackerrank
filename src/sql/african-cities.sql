-- https://www.hackerrank.com/challenges/african-cities/problem

SELECT City.name from City, Country
       WHERE City.countrycode = Country.code AND Country.continent = 'Africa';
