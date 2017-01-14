#lang scheme
; Filter a list
(define myfilter 
  (lambda (pred lst)
    (if (null? lst)
        '()
        (if (pred (car lst))
            (cons (car lst) (myfilter pred (cdr lst)))
            (myfilter pred (cdr lst))))))

; Filter a list of lists
(define deepfilter
  (lambda (pred lst)
    (if (null? lst)
        '()
        (if (list? (car lst))
            (append (deepfilter pred (car lst)) (deepfilter pred (cdr lst)))
            (if (pred (car lst))
                (cons (car lst) (deepfilter pred (cdr lst)))
                (deepfilter pred (cdr lst)))))))
    

(myfilter odd? '(1 2 3 4 5 6 7 8))
;(filter odd? '((1 2 3) 4 5 (6 7) (8)))
(deepfilter odd? '((1 2 3) 4 5 (6 7) (8)))