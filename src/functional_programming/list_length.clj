;; https://www.hackerrank.com/challenges/fp-list-length/problem

(ns functional-programming)

(fn [coll]
  (->> coll
       (map-indexed (fn [idx _] idx))
       last
       inc))
