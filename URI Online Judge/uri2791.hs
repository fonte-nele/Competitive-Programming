-- Escreva a sua solução aqui

main :: IO ()
main = do
    contents <- getContents
    let (a:b:c:d:_) = map (read :: String -> Int) $ words contents
    if a == 1
        then putStrLn $ ("1")
        else if b == 1
            then putStrLn $ ("2")
            else if c == 1
                then putStrLn $ ("3")
                else putStrLn $ ("4")
