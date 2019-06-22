#include <stdio.h>

int main(){
	
	int n, k, i, num;
	scanf("%d %d", &n, &k);
	int v[k];
	memset(v, 0, sizeof(v));

	for(i = 0; i < n; i++){
		scanf("%d", &num);
		v[num-1]++;
	}

	int menor = v[0];
	for(i = 1; i < k; i++){
		if(v[i] < menor)
			menor = v[i];
	}
	printf("%d\n", menor);

	return 0;
}