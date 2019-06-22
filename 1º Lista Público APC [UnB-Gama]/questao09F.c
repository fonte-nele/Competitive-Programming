#include <stdio.h>

int main(){
    int i, j, tam, pos = 0;
    char risada[65], result[65];

    scanf("%s", risada);
    tam = strlen(risada);
    for(i = 0; i < tam; i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            result[pos] = risada[i];
            pos++;
        }
    }

    if(pos == 0){
        printf("Valor invalido!\n");
        return 0;
    }

    for(i = 0, j = pos-1; i < (pos/2); i++,j--)
    {
        if(result[i] != result[j]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
   
	return 0;
}