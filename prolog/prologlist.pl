% Prolog list rule examples

% Change everyting in a list to 'secret'
change([], []) :- !.   % base case
change([_H| T], [secret | T1]) :- change(T, T1).  
								 
% test change
:- change([1, 2, 3], X), write(X), nl.


% Convert all negative numbers in a list to positive
positive([], []) :- !.
positive([H| T], [HP | T1]) :- H < 0, HP is H * -1, positive(T, T1).
positive([H| T], [H | T1]) :- positive(T, T1).
								 
:- positive([-1, 2, -3], X), write(X), nl.
