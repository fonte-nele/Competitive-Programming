#include <stdio.h>

int main(){
	
    char frase[1005];

    fgets(frase, 1005, stdin);
    int tam = strlen(frase), i;

    for(i=0; i < tam; i++)
    {
        if(frase[i] == 'p')
        {
            printf("%c", frase[i+1]);
            i++;
        }
        else{
            printf("%c", frase[i]);
        }
    }
    printf("\n");
	
    return 0;
}