exibe([]):-nl.
exibe([X |Y]):- write(X),exibe(Y).