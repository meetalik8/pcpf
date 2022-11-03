-- Sum of n natural numbers
fun::Int->Int
fun n|n==0=0
fun n|n/=0=n+fun(n-1)

main = do
       putStrLn("Enter a number")
       nin<- getLine
       let n=(read nin :: Int)
       putStrLn("The sum of natural numbers is")
       print(fun n)
