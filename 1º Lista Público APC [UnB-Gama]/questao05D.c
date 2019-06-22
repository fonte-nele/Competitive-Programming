#include <stdio.h>

int main(){
	
	int i, n, num1, num2, cont = 1;
	while(scanf("%d", &n) && n){
		int dif = 0;

		printf("Teste %d\n", cont);
		for(i = 0; i < n; i++){
			scanf("%d %d", &num1, &num2);
			
			printf("%d\n", num1 - num2 + dif);
			dif += (num1 - num2);

		}
		cont++;
	}

	return 0;
}	