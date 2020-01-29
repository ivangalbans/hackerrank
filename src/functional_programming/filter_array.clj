(ns functional-programming)

;; https://www.hackerrank.com/challenges/fp-filter-array/problem

(fn [x coll]
  (filter #(< % x) coll))
