(ns functional-programming)

(fn [lst]
  (let [rev (fn [coll rcoll]
              (if-not (seq coll)
                rcoll
                (recur (rest coll) (cons (first coll) rcoll))))]
    (rev lst [])))
