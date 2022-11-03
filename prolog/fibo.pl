fibo(0,0).
fibo(1,1).
fibo(N,F):-N>1,X is N-1,Y is N-2,fibo(X,A),fibo(Y,B),F is A+B.
