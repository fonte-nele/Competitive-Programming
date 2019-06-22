#include <stdio.h>

int main(){
    int cont = 0, i;
    char frase[105];

    while(scanf("%s", frase) != EOF){
        int tam = strlen(frase);
        for(i = 0; i < tam; i++){
            if(frase[i] == 'o')
                cont++;
        }

    }
    printf("%d\n", cont);

	return 0;
}