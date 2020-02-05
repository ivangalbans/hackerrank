;; https://www.hackerrank.com/challenges/solve-me-first/problem

(ns algorithms)

; The code is given, you can just Submit!
;
(defn solveMeFirst [x y]
  (+ x y))

(def a (read-line))
(def b (read-line))

(println (solveMeFirst (Integer/parseInt a) (Integer/parseInt b)))
