#include <stdio.h>

int main(){

	int i, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        char frase[109];
        scanf("%s", frase);
        int tam = strlen(frase), j, soma = 0;

        for(j=0; j < tam; j++)
        {
            if(frase[j] >= '0' && frase[j] <= '9')
            {
                soma += (frase[j] - '0');
            }
        }
        printf("%d\n", soma);
    }

	return 0;
}