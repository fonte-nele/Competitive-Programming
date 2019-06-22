#include <stdio.h>

int main(){
	
	int i, n;
	scanf("%d", &n);

	int v[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	int menor, indice = 0;
	menor = v[0];

	for(i = 1; i < n; i++){
		if(v[i] < menor){
			menor = v[i];
			indice = i;
		}
	}

	printf("%d\n", indice);

	return 0;
}