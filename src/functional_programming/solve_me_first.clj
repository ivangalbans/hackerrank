(ns functional-programming)

;; https://www.hackerrank.com/challenges/fp-solve-me-first/problem

(defn solveMeFirst [x y]
  (+ x y))

(def a (read-line))
(def b (read-line))

(println (solveMeFirst (Integer/parseInt a) (Integer/parseInt b)))
