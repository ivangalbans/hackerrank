;; https://www.hackerrank.com/challenges/fp-hello-world-n-times/problem

(ns functional-programming)

(defn hello_word_n_times [n]
  (println "Hello World")
  (when (> n 1) (recur (dec n))))
