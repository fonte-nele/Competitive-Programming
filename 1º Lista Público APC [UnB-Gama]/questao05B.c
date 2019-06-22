#include <stdio.h>

int main(){
	
	int n, i, cont = 1;
	while(scanf("%d", &n) && n){
		int v[n];
		for(i = 0; i < n; i++){
			scanf("%d", &v[i]);
		}
		printf("Teste %d\n", cont);
		for(i = 0; i < n; i++){
			if(i+1 == v[i]){
				printf("%d\n", v[i]);
				break;
			}
		}
		printf("\n");
		cont++;
	}

	return 0;
}