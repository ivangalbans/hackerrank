;; https://www.hackerrank.com/challenges/fp-update-list/problem

(ns functional-programming)

(fn [coll]
  (map #(Math/abs %) coll))
