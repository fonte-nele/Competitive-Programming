#include <stdio.h>

int main(){
    int i, tam, n = 0;
    char nome[105];

    while(scanf("%s", nome) != EOF){
        if(n == 0){
            tam = strlen(nome);
            for(i = 0; i < tam; i++){
                printf("%c", tolower(nome[i]));
            }
            printf(".");
        }
        n++;
    }
    //printf("String = %s\n", nome);
    tam = strlen(nome);
    for(i = 0; i < tam; i++){
        printf("%c", tolower(nome[i]));
    }
    printf("@unb.br\n");

	return 0;
}