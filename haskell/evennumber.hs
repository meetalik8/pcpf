isEven:: Int-> Bool
isEven x|x `mod`2==0=True
       |otherwise =False
main = do
       putStrLn"Enter a number"
       ain <- getLine
       let a = (read ain::Int)
       print(isEven a)
