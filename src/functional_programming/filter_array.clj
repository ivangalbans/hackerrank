;; https://www.hackerrank.com/challenges/fp-filter-array/problem

(ns functional-programming)

(fn [x coll]
  (filter #(< % x) coll))
