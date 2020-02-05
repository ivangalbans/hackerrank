;; https://www.hackerrank.com/challenges/fp-list-replication/problem

(ns functional-programming)

(fn [n coll]
  (mapcat #(repeat n %) coll))
