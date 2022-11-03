--Factorial
-- to write function in haskell we need to declare it
-- func :: datatypeOfInput ->  dataTypeReturned
fact::Int -> Int
-- first exit conditon
fact n|n==0=1
-- function variable |(binding) if n==0 then return 1
fact n|n/=0=n*fact(n-1)
-- if n is not equal to 0 then return n*fact(n-1)
main = do
       putStrLn("Enter a number")
       nin <- getLine
       let n = (read nin :: Int)
       putStrLn("Factorial of the number is ")
       print(fact n)
