/**
 * You can edit, run, and share this code. 
 * play.kotlinlang.org 
 */

import java.util.Scanner

fun main(args: Array<String>) 
{
    val input = Scanner(System.`in`)

    while (input.hasNext())	// EOF
    {
        val n = input.nextInt(); val g = input.nextInt()
        val games = mutableListOf<Int>() // vector
        var pts :Int = 0
        var qnt : Int = 0

        for(i in 1..n)
        {
            var a:Int = input.nextInt(); 
            var b:Int = input.nextInt()
            if(a>b) 
                pts +=3
            else if(a == b)
            {
                pts+=1; qnt+=1
            }
            else
                games.add(b-a)
        }//fim da leitura
        games.sort()
        var g1 :Int = g
        while(g1 != 0 && qnt != 0){
            qnt-=1; g1 -= 1; pts+=2
        }
        
        for(idx in 0..games.size-1)
        {
            if(g1<=0) break
            var k:Int = games[idx]
            if(g1>=k) 
            {
                if(g1 == k){
                	pts+=1; g1 = 0; break 
                }
            }
            if(g1>k) {pts+=3; g1 -= k+1}
        }        
        println(pts)        
    }
}