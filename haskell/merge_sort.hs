mergeList [] [] z =reverse z
mergeList (x:xs) [] z= mergeList xs [] (x:z)
mergeList [] (y:ys) z= mergeList [] ys (y:z)
mergeList(x:xs)(y:ys)z=if x <= y then mergeList xs (y:ys) (x:z) else mergeList (x:xs) ys (y:z)

main = do
       putStrLn("first list")
       putStrLn ("Enter first number: ")
       ain <- getLine
       let a = (read ain :: Int)
       putStrLn ("Enter second number: ")
       bin <- getLine
       let b = (read bin :: Int)
       putStrLn ("Enter third number: ")
       cin <- getLine
       let c = (read cin :: Int)
       putStrLn ("Second List")
       putStrLn ("Enter first number: ")
       din <- getLine
       let d = (read din :: Int)
       putStrLn ("Enter second number: ")
       ein <- getLine
       let e = (read ein :: Int)
       putStrLn ("Enter third number: ")
       fin <- getLine
       let f = (read fin :: Int)
       let list1 = [a,b,c]
       let list2 = [d,e,f]
       print(mergeList list1 list2 [])
