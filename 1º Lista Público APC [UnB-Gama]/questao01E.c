#include <stdio.h>

int main(){
	double custo, soma;
	int pLucro, pImposto;

	scanf("%lf", &custo);
	scanf("%d %d", &pLucro, &pImposto);
	
	soma = custo + (pLucro/100.0 * custo) + (pImposto/100.0 * custo);

	printf("%.2lf\n", soma);

	return 0;
}