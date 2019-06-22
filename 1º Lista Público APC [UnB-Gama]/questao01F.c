#include <stdio.h>

int main(){
	
	int i, conta, mult = 2, soma = 0, resto;

	scanf("%d", &conta);

	//Algoritmo Módulo 11
	for(i = 0; i < 6; i++){
		//printf("%d\n", conta%10);
		soma += (conta%10)*mult;
		conta /= 10;
		mult++;
	}
	resto = soma % 11;

	printf("%d\n", 11 - resto);

	return 0;
}