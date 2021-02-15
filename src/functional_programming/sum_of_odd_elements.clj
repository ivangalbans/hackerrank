;; https://www.hackerrank.com/challenges/fp-sum-of-odd-elements/problem

(ns functional-programming)

(fn [lst]
  (->> lst
      (filter odd?)
      (apply +)))
