main :: IO ()
main = do
    contents <- getContents
    let (a:b:_) = map (read :: String -> Int) $ words contents
    if b < a
        then putStrLn $ ("Eu odeio a professora!")
        else if b-a >= 3
            then putStrLn $ ("Muito bem! Apresenta antes do Natal!")
            else if a+2 < 24
                then putStrLn $ ("Parece o trabalho do meu filho!\nTCC Apresentado!")
                else putStrLn $ ("Parece o trabalho do meu filho!\nFail! Entao eh nataaaaal!")