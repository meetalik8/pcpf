-- higher order function in haskell
-- to find square, double, half
repeat::(a->a)->a->a
repeat f x=f(f x)
square x=x*x
double x=x*2
half x=x/2
main=do
     putStrLn"Enter a number to repeat square,double and half"
     ain<-getLine
     let a=(read ain::Float)
     print(Main.repeat square a)
     print(Main.repeat double a)
     print(Main.repeat half a)
     
