-- compute x^2+4x-5
main = do
       putStrLn"Enter the value of x"
       ain<- getLine
       let a=(read ain:: Float)
       let c=a*a+4*a-5
       print(c)
       
