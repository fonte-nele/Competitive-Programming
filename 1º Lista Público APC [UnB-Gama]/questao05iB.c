#include <stdio.h>

int main(){
	
	int i, j, n;
	scanf("%d", &n);
	int cont = n-1, quant = 1;

	for(i = 1; i <= n; i++){
		for(j = 0; j < cont; j++){
			printf(" ");
		}
		for(j = 0; j < quant; j++){
			printf("*");
		}
		printf("\n");
		cont--;
		quant += 2;
	}
	
	return 0;
}	