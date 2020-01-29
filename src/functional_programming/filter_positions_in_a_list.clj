(ns functional-programming)

;; https://www.hackerrank.com/challenges/fp-filter-positions-in-a-list/problem

(fn [coll]
  (keep-indexed (fn [i x] (when (odd? i) x)) coll))
