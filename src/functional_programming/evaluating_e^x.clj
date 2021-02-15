;; https://www.hackerrank.com/challenges/eval-ex/problem

(ns functional-programming)

(def n (Integer/parseInt (clojure.string/trim (read-line))))

(doseq [n-itr (range n)]
  (def x (Double/parseDouble (clojure.string/trim (read-line))))
  (->> (repeat x)
         (map-indexed (fn [idx item] (Math/pow item idx)))
         (map-indexed (fn [idx item] (/ item (apply * (range 1 (inc idx))))))
         (take 10)
         (apply +)
         println))

