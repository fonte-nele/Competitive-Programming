#include <stdio.h>

int main(){
	
	int i, n, contP = 0, contI = 0;
	scanf("%d", &n);

	int v[n], par[n], impar[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}

	for(i = 0; i < n; i++){
		if(v[i] % 2 == 0){
			par[contP] = i;
			contP++;
		}else{
			impar[contI] = i;
			contI++;
		}
	}

	for(i = 0; i < contP; i++){
		if(i == 0)
			printf("%d", par[i]);
		else
			printf(" %d", par[i]);
	}
	printf("\n");
	for(i = 0; i < contI; i++){
		if(i == 0)
			printf("%d", impar[i]);
		else
			printf(" %d", impar[i]);
	}
	printf("\n");


	return 0;
}