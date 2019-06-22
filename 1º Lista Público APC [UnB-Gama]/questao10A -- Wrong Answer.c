#include <stdio.h>

int main(){
    int i = 0;
    char frase[10105][50], pal[50], troca[50];

    while(scanf("%s", pal) != EOF){
        strcpy(frase[i], pal);
        i++;
    }
    int j;
    strcpy(troca, frase[i-1]);
    strcpy(pal, frase[i-2]);

    for(j = 0; j < i-2; j++){
        int tam = strlen(pal);
        int tam2 = strlen(frase[j]);

        if(tam2 >= tam){
            if(strncmp(frase[j], pal, tam) == 0){
                if(j == 0){
                    printf("%s", troca);
                }else{
                    printf(" %s", troca);
                }
                int k;
                for(k = tam; k < tam2; k++){
                    printf("%c", frase[j][k]);
                }
            }else{
                if(j == 0){
                    printf("%s", frase[j]);
                }else{
                    printf(" %s", frase[j]);
                }
            }
        }else if(j == 0){
            printf("%s", frase[j]);
        }else{
            printf(" %s", frase[j]);
        }
    }
    printf("\n");
    /*fgets(frase, 1005, stdin);
    scanf("%s", pal1);
    scanf("%s", pal2);

    printf("%s", frase);
    printf("%s\n", pal1);
    printf("%s\n", pal2);
    int tam = strlen(pal1);

    char *pch;
    pch = strtok(frase, " ");
    while(pch != NULL){
        //printf("%s\n", pch);

        if(strncmp(pch, pal1, tam) == 0){
            if(i == 0)
                printf("%s", pal2);
            else
                printf(" %s", pal2);

            int tam2 = strlen(pch), j;
            for(j = tam; j < tam2; j++){
                printf("%c", pch[j]);
            }
        }else{
            if(i == 0)
                printf("%s", pch);
            else    
                printf(" %s", pch);
        }

        i++;
        pch = strtok(NULL, " ");
    }*/

	return 0;
}