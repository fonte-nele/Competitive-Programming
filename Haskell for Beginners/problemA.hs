import System.IO (isEOF)
import Control.Monad (forever, when)
import System.Exit (exitSuccess)
import Data.Char
import Data.List

main :: IO ()
main = loop 
    
loop = forever $ do 
    done <- isEOF
    when done $ exitSuccess
    contents <- getLine
    let (a:b:c:_) = words contents
    if a == "papel" && b == "papel" && c == "papel"
        then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
        else if a == "papel" && b == "papel" && c == "pedra"
            then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
            else if a == "papel" && b == "papel" && c == "tesoura"
                then putStrLn $ ("Urano perdeu algo muito precioso...")
                else if a == "papel" && b == "pedra" && c == "papel"
                    then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                    else if a == "papel" && b == "pedra" && c == "pedra"
                        then putStrLn $ ("Os atributos dos monstros vao ser inteligencia, sabedoria...")
                        else if a == "papel" && b == "pedra" && c == "tesoura"
                            then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                            else if a == "papel" && b == "tesoura" && c == "papel"
                                then putStrLn $ ("Iron Maiden's gonna get you, no matter how far!")
                                else if a == "papel" && b == "tesoura" && c == "pedra"
                                    then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                    else if a == "papel" && b == "tesoura" && c == "tesoura"
                                        then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                        else if a == "tesoura" && b == "papel" && c == "papel"
                                            then putStrLn $ ("Os atributos dos monstros vao ser inteligencia, sabedoria...")
                                            else if a == "tesoura" && b == "papel" && c == "tesoura"
                                                then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                else if a == "tesoura" && b == "papel" && c == "pedra"
                                                    then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                    else if a == "tesoura" && b == "tesoura" && c == "papel"
                                                        then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                        else if a == "tesoura" && b == "tesoura" && c == "tesoura"
                                                            then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                            else if a == "tesoura" && b == "tesoura" && c == "pedra"
                                                                then putStrLn $ ("Urano perdeu algo muito precioso...")
                                                                else if a == "tesoura" && b == "pedra" && c == "papel"
                                                                    then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                    else if a == "tesoura" && b == "pedra" && c == "tesoura"
                                                                        then putStrLn $ ("Iron Maiden's gonna get you, no matter how far!")
                                                                        else if a == "tesoura" && b == "pedra" && c == "pedra"
                                                                            then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                            else if a == "pedra" && b == "papel" && c == "papel"
                                                                                then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                else if a == "pedra" && b == "papel" && c == "pedra"
                                                                                    then putStrLn $ ("Iron Maiden's gonna get you, no matter how far!")
                                                                                    else if a == "pedra" && b == "papel" && c == "tesoura"
                                                                                        then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                        else if a == "pedra" && b == "pedra" && c == "papel"
                                                                                            then putStrLn $ ("Urano perdeu algo muito precioso...")
                                                                                            else if a == "pedra" && b == "pedra" && c == "pedra"
                                                                                                then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                                else if a == "pedra" && b == "pedra" && c == "tesoura"
                                                                                                    then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                                    else if a == "pedra" && b == "tesoura" && c == "papel"
                                                                                                        then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                                        else if a == "pedra" && b == "tesoura" && c == "tesoura"
                                                                                                            then putStrLn $ ("Os atributos dos monstros vao ser inteligencia, sabedoria...")
                                                                                                            else if a == "pedra" && b == "tesoura" && c == "pedra"
                                                                                                                then putStrLn $ ("Putz vei, o Leo ta demorando muito pra jogar...")
                                                                                                                else putStrLn $ ("\n")
    -- putStrLn $show(a)
    -- putStrLn $show(b)
    -- putStrLn $show(c)
    -- putStrLn "\n"
    loop