#include <stdio.h>

int main(){
	
	int i, n, num;
	while(scanf("%d", &n) && n){
		int somaA = 0, somaB = 0;

		for(i = 0; i < n; i++){
			scanf("%d", &num);
			if(num == 0)
				somaA++;
			else if(num == 1)
				somaB++;
		}
		printf("Alice ganhou %d e Beto ganhou %d\n", somaA, somaB);
	}

	return 0;
}