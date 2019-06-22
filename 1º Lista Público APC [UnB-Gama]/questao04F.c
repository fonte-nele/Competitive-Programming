#include <stdio.h>

int main(){
    int i, n, m, quant;

    scanf("%d %d", &n, &m);
    scanf("%d", &quant);

    int pos1[quant], pos2[quant];
    int posi1 = 1, posj1 = 1, posi2 = m, posj2 = n; 

    for(i = 0; i < quant; i++){
        scanf("%d %d", &pos1[i], &pos2[i]);
    }

    for(i = 0; i < quant; i++){
        if(pos1[i] == 1){
            posi1++;
        }else if(pos1[i] == 2){
            posi1--;
        }else if(pos1[i] == 3){
            posj1++;
        }else if(pos1[i] == 4){
            posj1--;
        }

        if(pos2[i] == 1){
            posi2++;
        }else if(pos2[i] == 2){
            posi2--;
        }else if(pos2[i] == 3){
            posj2++;
        }else if(pos2[i] == 4){
            posj2--;
        }

        if(posi1 < 1 || posi1 > m || posj1 < 1 || posj1 > n){
            printf("PA saiu na posicao (%d,%d) no passo %d\n", posj1, posi1, i+1);
            return 0;
        }
        if(posi2 < 1 || posi2 > m || posj2 < 1 || posj2 > n){
            printf("PB saiu na posicao (%d,%d) no passo %d\n", posj2, posi2, i+1);
            return 0;
        }
        if(posi1 == posi2 && posj1 == posj2){
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", posj1, posi1, i+1);
            return 0;
        }
    }

    printf("Nao se encontraram\n");

	return 0;
}