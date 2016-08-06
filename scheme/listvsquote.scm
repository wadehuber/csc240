#lang scheme
; Using list vs quote to create a list.
; Try uncommenting out the commeted lines to see what happens

(define num 123)

;(define q0 (list (+ 1 'Hello)))
(define q1 (list + 1 'Hello num))
(define q2 (quote (+ 1 Hello num)))

(write "Using list:")(newline)
q1
(newline)(write "Using quote:")(newline)
q2

(newline)(write "Using the first element of the list as an operator:")(newline)
((car q1) 1 2 3)
;((car q2) 1 2 3)