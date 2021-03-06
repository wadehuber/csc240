%tail recursion 

fact_tail(N, F) :- fact_tail(N, 1, F), !.
fact_tail(1, F, F) :- !.
fact_tail(N, F, Fact) :- N1 is N-1, F1 is F * N, fact_tail(N1, F1, Fact).

fib_tail(N, F) :- fib_tail(N, 1, 1, F), !.
fib_tail(1, F2, _, F2) :- !.
fib_tail(N, F2, F1, F) :- N1 is N-1, F0 is F1 + F2, fib_tail(N1, F1, F0, F).

reverse_tail(L1, L2) :- reverse_tail(L1, [], L2).
reverse_tail([],L2, L2) :- !.
reverse_tail([H | T1], Res, Result) :- reverse_tail(T1, [H|Res], Result).

% testing
:- fact_tail(1, X), write(['fact_tail(1)', X]), nl.
:- fact_tail(5, X), write(['fact_tail(5)', X]), nl.
:- fact_tail(10, X), write(['fact_tail(10)', X]), nl.
:- nl.
:- fib_tail(1, X), write(['fib_tail(1)', X]), nl.
:- fib_tail(5, X), write(['fib_tail(5)', X]), nl.
:- fib_tail(10, X), write(['fib_tail(10)', X]), nl.
:- nl.
:- reverse_tail([1,2,3,4,5], X), write(['reverse_tail([1,2,3,4,5])', X]), nl.
:- reverse_tail([], X), write(['reverse_tail([])', X]), nl.
:- reverse_tail([1,2,3,4], X), write(['reverse_tail([1,2,3,4])', X]), nl.
:- nl.
