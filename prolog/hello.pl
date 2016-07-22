% Multi-lingual "Hello, world" example in Prolog
greeting('Hello world!').
greeting('Bonjour monde!').
greeting('Hola mundo!').
greeting('Hallo welt!').

:- greeting(X), write(X), nl.

%sample output:
%  1 ?- greeting(X).
%  X = 'Hello world!' ;
%  X = 'Bonjour monde!' ;
%  X = 'Hola mundo!' ;
%  X = 'Hallo welt!'.

