#include <stdio.h>

int main(){
	
	int i, n, cont = 1;
	while(scanf("%d", &n) && n){
		int v[4];
		memset(v, 0, sizeof(v));
		printf("Teste %d\n", cont);

		while(n >= 50){
			v[0]++;
			n -= 50;
		}
		while(n >= 10){
			v[1]++;
			n -= 10;
		}
		while(n >= 5){
			v[2]++;
			n -= 5;
		}
		while(n >= 1){
			v[3]++;
			n -= 1;
		}

		for(i = 0; i < 4; i++){
			if(i == 0){
				printf("%d", v[i]);
			}else{
				printf(" %d", v[i]);
			}
		}
		printf("\n\n");
		cont++;
	}


	return 0;
}