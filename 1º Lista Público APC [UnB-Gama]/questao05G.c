#include <stdio.h>

int main(){
	
	int i, n, cont = 1, num1, num2;
	while(scanf("%d", &n) && n){
		int somaA = 0, somaB = 0;

		printf("Teste %d\n", cont);

		for(i = 0; i < n; i++){
			scanf("%d %d", &num1, &num2);
			somaA += num1;
			somaB += num2;
		}
		if(somaA > somaB){
			printf("Aldo\n\n");
		}else{
			printf("Beto\n\n");
		}
		cont++;
	}

	return 0;
}