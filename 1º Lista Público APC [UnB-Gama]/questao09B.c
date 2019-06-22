#include <stdio.h>

int main(){
	
	char nome[10005];
	scanf("%s", nome);
	int i, tam = strlen(nome);

	for(i = tam-1; i >= 0; i--){
		printf("%c", nome[i]);
	}

	printf("\n");

	return 0;
}