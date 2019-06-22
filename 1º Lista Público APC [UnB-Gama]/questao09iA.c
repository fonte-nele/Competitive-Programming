#include <stdio.h>

int main(){

   
    int cont = 0, total = 0;
    char frase[1009];
    char p;

    scanf("%c", &p);

    while(scanf("%s", frase) != EOF)
    {
        //printf("%s\n", frase);
        if(strcmp(frase,"") != 0){
            int tam = strlen(frase), j;
            for(j = 0; j < tam; j++){
                if(frase[j] == p){
                    cont++;
                    break;
                }
            }

            total++;
        }
    }

    printf("%.1lf\n", (double)cont/((double)total/100));
    //cout << fixed << setprecision(1) << (double)cont/((double)total/100)<< endl;
    
	return 0;
}