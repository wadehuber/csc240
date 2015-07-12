#lang scheme

; Example 1: Factorial numbers
; find factorial using the straightforward recursive definition
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


; Example 2: Fibonacci numbers
; find fibonacci(n) using the straightforward recursive definition
(define fib
  (lambda (n)
    (cond 
      ((<= n 0) 0)
      ((= n 1) 1)
      (else (+ (fib (- n 2)) (fib (- n 1)))))))
 
; Tail-recursive Fibonacci implementation
(define fib-tail
  (lambda (n)
    (if (<= n 0)
        0
        (fib-tail-acc n 0 1))))

(define fib-tail-acc
  (lambda (index f2 f1)
    (if (<= index 0)
        f2
        (fib-tail-acc (- index 1) f1 (+ f1 f2)))))


; Example 3: List reverse
; Straitforward list reverse implementation 
(define rev
  (lambda (lst)
    (if (or (not (list? lst)) (empty? lst))
        '()
        (append (rev (cdr lst)) (list (car lst))))))

; Tail-recursive list reverse implementation
(define rev-tail
  (lambda (lst)
    (rev-tail-acc lst '())))
(define rev-tail-acc
  (lambda (lst res)
    (if (or (not (list? lst)) (empty? lst))
        res
        (rev-tail-acc (cdr lst) (cons (car lst) res)))))

; Test function:  apply func to each member of lst
(define test-list 
  (lambda (func lst)
    (if (or (not (list? lst)) (empty? lst))
        (newline)  
        (begin
          (write (func (car lst))) (newline)
          (test-list func (cdr lst))))))

; Test cases
(display "factorial - values 1, 4, 10, 100")(newline)
(test-list factorial '(1 4 10)) 

(display "factorial-tail - values 1, 4, 10, 100")(newline)
(test-list factorial-tail '(1 4 10))

(display "fib - values 1, 4, 10, 100")(newline)
(test-list fib '(1 4 10))

(display "fibonacci-tail - values 1, 4, 10, 100")(newline)
(test-list fib '(1 4 10))

(display "rev - values '(a b c d) '(1 2 3) '())")(newline)
(test-list rev '((a b c d) (1 2 3) ()))

(display "rev-tail - values '(a b c d) '(1 2 3) '())")(newline)
(test-list rev-tail '((a b c d) (1 2 3) ()))