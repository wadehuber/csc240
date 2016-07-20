% Prolog list rule examples

% Change everyting in a list to 'secret'
% Rule 1: Base case
% Rule 2: If there is a head, ignore it and cons 'secret' and the changed tail
change([], []) :- !.   % base case
change([_H| T], [secret | T1]) :- change(T, T1).  


% Convert all negative numbers in a list to positive
% Rule 1: Base case
% Rule 2: Multiply by -1 if H is negative
% Rule 3: H is positive, so leave it alone
positive([], []) :- !.
positive([H| T], [HP | T1]) :- H < 0, HP is H * -1, positive(T, T1).
positive([H| T], [H | T1]) :- positive(T, T1).
								 
% tests
:- change([1, 2, 3], X), write(X), nl.								 
:- positive([-1, 2, -3], X), write(X), nl.
