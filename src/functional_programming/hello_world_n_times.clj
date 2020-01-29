(ns functional-programming)

;; https://www.hackerrank.com/challenges/fp-hello-world-n-times/problem

(defn hello_word_n_times [n]
  (println "Hello World")
  (when (> n 1) (recur (dec n))))
