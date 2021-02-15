;; https://www.hackerrank.com/challenges/functional-programming-warmups-in-recursion---gcd/problem

(ns functional-programming)

(let [f (fn [a b]
          (if (zero? b)
            a
            (recur b (mod a b))))
      [m n] (map read-string (re-seq #"\d+" (read-line)))]
  (println (f m  n)))
