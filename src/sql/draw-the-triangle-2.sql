-- https://www.hackerrank.com/challenges/draw-the-triangle-2/problem

SET @i = 0;
SELECT repeat('* ', @i := @i + 1) FROM information_schema.tables LIMIT 20;
