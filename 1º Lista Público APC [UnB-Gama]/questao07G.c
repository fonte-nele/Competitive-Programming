#include <stdio.h>

int main(){
	
	int i, n;
	scanf("%d", &n);
	int v1[n], v2[n];


	for(i = 0; i < n; i++){
		scanf("%d", &v1[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &v2[i]);
	}
	for(i = 0; i < n; i++){
		if(v1[i] != v2[i]){
			printf("nao\n");
			return 0;
		}
	}
	printf("sim\n");

	return 0;
}