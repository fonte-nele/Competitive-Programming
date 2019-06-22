#include <stdio.h>

int main(){
    int n, i, tam, maior = 0;
    char frase[109], res[109];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", frase);
        tam = strlen(frase);
        if(tam > maior){
            maior = tam;
            strcpy(res, frase);
        }
    }
    printf("%s\n", res);
    
	return 0;
}