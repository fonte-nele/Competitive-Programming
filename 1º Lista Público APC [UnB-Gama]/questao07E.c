#include <stdio.h>

int main(){
	
	int i, n, valor;
	scanf("%d", &n);

	int v[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	scanf("%d", &valor);

	for(i = 0; i < n; i++){
		if(v[i] == valor){
			printf("pertence\n");
			return 0;
		}
	}
	printf("nao pertence\n");


	return 0;
}