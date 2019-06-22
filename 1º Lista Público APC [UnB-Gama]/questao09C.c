#include <stdio.h>

int main(){
	
	int i, n, maior = 0;
	char nome[1005];
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s", nome);
		//printf("%s\n", nome);
		int tam = strlen(nome);

		if(tam > maior)
			maior = tam;
	}
	printf("%d\n", maior);

	return 0;
}