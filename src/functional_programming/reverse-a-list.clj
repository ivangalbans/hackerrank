;; https://www.hackerrank.com/challenges/fp-reverse-a-list/problem

(ns functional-programming)

(fn [lst]
  (let [rev (fn [coll rcoll]
              (if-not (seq coll)
                rcoll
                (recur (rest coll) (cons (first coll) rcoll))))]
    (rev lst [])))
