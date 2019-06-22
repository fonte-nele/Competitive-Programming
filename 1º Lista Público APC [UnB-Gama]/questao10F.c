#include <stdio.h>
#define MAX_ALUNOS 1005

int main(){
    int n, i, indice_melhor;
    int turma = 1;

    struct
    {
        int codigo, media;
    }alunos[MAX_ALUNOS];
    scanf("%d", &n);

    while(n > 0){
        for(i = 0; i < n; i++){
            scanf("%d %d", &alunos[i].codigo, &alunos[i].media);
        }

        indice_melhor = 0;
        for(i = 1; i < n; i++){
            if(alunos[i].media >= alunos[indice_melhor].media){
                indice_melhor = i;
            }
        }
        
        printf("Turma %d\n", turma++);
        for(i = 0; i < n; i++){
            if(alunos[indice_melhor].media == alunos[i].media)
                printf("%d ", alunos[i].codigo);
        }
        printf("\n\n");
        scanf("%d", &n);
    }

	return 0;
}