#include <stdio.h>

int main(){
    int i, n = 0, total = 0, cont = 0;
    char nome[105];

    while(scanf("%s", nome) != EOF){
        if(strcmp(nome, "sim") == 0){
            cont++;
        }
        n++;
        if(n == 10){
            n = 0;
            if(cont >= 2){
                total++;
            }
            cont = 0;
        }
    }
    printf("%d\n", total);

	return 0;
}