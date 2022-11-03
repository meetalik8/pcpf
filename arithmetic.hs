main = do
       putStrLn"Enter a number"
       ain<- getLine
       let a=(read ain:: Float)
       putStrLn"Enter another number"
       bin<-getLine
       let b=(read bin:: Float)
       putStrLn"Sum of the two numbers"
       print(a+b)
       putStrLn"Subtraction of the two numbers"
       print(a-b)
       putStrLn"Multiplication of the two numbers"
       print(a*b)
       putStrLn"Division of the two numbers"
       print(a/b)
       
