#include <stdio.h>

int main(){
	
	char nome[10001];
	scanf("%s", nome);
	int tam = strlen(nome);

	printf("%d\n", tam);

	return 0;
}