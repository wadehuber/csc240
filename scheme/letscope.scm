#lang racket

(define (double x) (* x 2))
(define (myfunc x) (+ x 1))

(define a 1)
(define b 2)

(define (let_scope)
  (let 
      ( (a 10)
        (b (+ a 5))
        (myfunc double)
        )
    (let 
        ( (m a)
          (b (myfunc 100))
          (c b)
          )
  (+ m b c))))
          
(let_scope)