prod:: [Int]->[Int]->[Int]
prod(n:ns)(m:ms)= [n*m] ++prod ns ms
prod [] []=[]
main = do
      putStrLn"For the first List"
      putStrLn"Enter 1st element of the list:"
      ain<-getLine
      let a=(read ain :: Int)
      putStrLn"Enter 2nd element of the list:"
      bin<-getLine
      let b=(read bin :: Int)
      putStrLn"Enter 3rd element of the list:"
      cin<-getLine
      let c=(read cin :: Int)
      let list1=[a,b,c]
      putStrLn"For the second List"
      putStrLn"Enter 1st element of the list:"
      din<-getLine
      let d=(read din :: Int)
      putStrLn"Enter 2nd element of the list:"
      ein<-getLine
      let e=(read ein :: Int)
      putStrLn"Enter 3rd element of the list:"
      fin<-getLine
      let f=(read fin :: Int)
      let list2=[d,e,f]
      putStrLn"The product of the two lists is:"
      print(prod list1 list2)
