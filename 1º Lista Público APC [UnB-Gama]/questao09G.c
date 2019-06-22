#include <stdio.h>

int main(){
    int i, j, tam, n;
    char pal[55];

    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%s", pal);
        tam = strlen(pal);
        char ant = tolower(pal[0]);
        int flag = 0;
        for(j = 1; j < tam; j++){
            if(ant >= tolower(pal[j])){
                flag = 1;
                break;
            }
            //printf("%c", ant);
            ant = tolower(pal[j]);
        }
        if(flag)
            printf("%s: N\n", pal);
        else
            printf("%s: O\n", pal);
    }
   
	return 0;
}