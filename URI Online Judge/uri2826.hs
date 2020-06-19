-- Escreva a sua solução aqui

main :: IO ()
main = do
    a <- getLine
    b <- getLine
    if a < b
    	then putStrLn $ (a ++ "\n" ++ b)
    	else putStrLn $ (b ++ "\n" ++ a)
    -- putStrLn $ id ("X = " ++ show(a + b))
