#lang scheme

; Returns the polynomial function ax^2 + bx + c      
(define poly 
  (lambda (a b c)
      (lambda (x)
        (let 
            ( (x2 (* x x))
              (x1 x) )
          (+ (* a x2) (* b x) c)))))

(define p1 (poly 1 1 1))
(define p2 (poly 1 4 4))
(define p3 (poly 1 0 -9))
             
(p1 1)
(p1 10)
(p2 1)
(p2 3)
(p3 1)
(p3 10)
((poly 2 2 2) 1)
((poly 2 2 2) 10)