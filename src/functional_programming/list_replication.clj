(ns functional-programming)

;; https://www.hackerrank.com/challenges/fp-list-replication/problem

(fn [n coll]
  (mapcat #(repeat n %) coll))
