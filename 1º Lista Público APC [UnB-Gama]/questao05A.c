#include <stdio.h>

int main(){
    int p;
    char d;
    int posX = 0, posY = 0;

    while(scanf("%c %d", &d, &p)){
        if(d == 'S' && p == 0){
            break;
        }
        if(d == 'C'){
            posY += p;
        }else if(d == 'B'){
            posY -= p;
        }else if(d == 'D'){
            posX += p;
        }else if(d == 'E'){
            posX -= p;
        }
    }

    printf("%d\n", (int) sqrt((posX * posX) + (posY * posY)));

	return 0;
}