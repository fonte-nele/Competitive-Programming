#include <stdio.h>

int main(){
	
	int i;
	double notas[5], menor, maior, soma = 0.0;

	for(i = 0; i < 5; i++){
		scanf("%lf", &notas[i]);
		soma += notas[i];
	}
	
	menor = maior = notas[0];

	for(i = 1; i < 5; i++){
		if(notas[i] < menor)
			menor = notas[i];
		if(notas[i] > maior)
			maior = notas[i];
	}

	printf("%.1lf\n", soma-menor-maior);

	return 0;
}