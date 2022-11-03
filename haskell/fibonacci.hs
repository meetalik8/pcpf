-- fibonacci
fibo::Int->Int
fibo n|n==0=0
fibo n|n==1=1
fibo n|n/=0&&n/=1=fibo(n-1)+fibo(n-2)

main = do
       putStrLn("Enter a number")
       nin<- getLine
       let n=(read nin :: Int)
       print(fibo n)
