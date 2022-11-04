fibo :: Int -> Int
fibo 0 = 0
fibo 1 = 1 
fibo x = fibo(x-1) + fibo(x-2)

fiboList x = map fibo[1..x]

main = do
    putStrLn("Enter a number: ")
    x <- readLn
    print(fiboList x)
