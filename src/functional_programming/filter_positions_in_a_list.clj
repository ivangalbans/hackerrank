;; https://www.hackerrank.com/challenges/fp-filter-positions-in-a-list/problem

(ns functional-programming)

(fn [coll]
  (keep-indexed (fn [i x] (when (odd? i) x)) coll))
