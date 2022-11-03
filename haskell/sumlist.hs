main =do
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
      print(sum list1)
