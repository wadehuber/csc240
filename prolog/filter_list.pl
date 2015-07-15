filter_less_than([], _, []) :- !.
filter_less_than([H | T], X, T1) :- X < H, !, filter_less_than(T, X, T1).
filter_less_than([H | T], X, [H | T1]) :- filter_less_than(T, X, T1).

:- filter_less_than([], 5, X), write(X), nl.
:- filter_less_than([1,10,2,20,30,3,4,40,10], 5, X), write(X), nl.
:- filter_less_than([1,10,2,20,30,3,4,40,10], 0, X), write(X), nl.
:- filter_less_than([1,10,2,20,30,3,4,40,10], 50, X), write(X), nl.
