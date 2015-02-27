#lang scheme

; find factorial using recursive definition
(define (factorial n)
  (if (<= n 0)
      1
      (* n (factorial (- n 1)))))

; tail-recursive factorial implementation using an accumulator
(define (factorial-tail n)
  (factorial-tail-acc n 1))

(define (factorial-tail-acc n acc) 
  (if (<= n 1)
      acc
      (factorial-tail-acc (- n 1) (* n acc))))

;; Test cases
(display "factorial - values 1, 4, 10, 100")(newline)
(factorial 1)
(factorial 4)
(factorial 10)
(factorial 100)

(newline)
(display "factorial-tail - values 1, 4, 10, 100")(newline)
(factorial-tail 1)
(factorial-tail 4)
(factorial-tail 10)
(factorial-tail 100)
