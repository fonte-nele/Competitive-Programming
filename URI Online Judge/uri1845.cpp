#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
  char c, ant='a';
  while ((scanf("%c",&c)) != EOF)  {
    switch (c) {
        case 'P': if (ant != 's' && ant != 'S' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'p' && ant != 'P') printf("F"); break;
        case 'S': if (ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 's' && ant != 'S') printf("F"); break;
        case 'V': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'v' && ant != 'V') printf("F"); break;
        case 'X': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'x' && ant != 'X') printf("F"); break;
        case 'J': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'j' && ant != 'J') printf("F"); break;
        case 'B': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'b' && ant != 'B') printf("F"); break;
        case 'Z': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'f' && ant != 'F' && ant != 'z' && ant != 'Z') printf("F"); break;
        case 'F': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F') printf("F"); break;
        case 'p': if (ant != 's' && ant != 'S' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'p' && ant != 'P') printf("f"); break;
        case 's': if (ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 's' && ant != 'S') printf("f"); break;
        case 'v': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'v' && ant != 'V') printf("f"); break;
        case 'x': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'x' && ant != 'X') printf("f"); break;
        case 'j': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'j' && ant != 'J') printf("f"); break;
        case 'b': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F' && ant != 'b' && ant != 'B') printf("f"); break;
        case 'z': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'f' && ant != 'F' && ant != 'z' && ant != 'Z') printf("f"); break;
        case 'f': if (ant != 's' && ant != 'S' && ant != 'P' && ant != 'p' && ant != 'V' && ant != 'v' && ant != 'X' && ant != 'x' && ant != 'j' && ant != 'J' && ant != 'B' && ant != 'b' && ant != 'Z' && ant != 'z' && ant != 'f' && ant != 'F') printf("f"); break;
        default: printf("%c",c); break;
    }
    ant = c;
  }
  return 0;
}