#include <stdio.h>

int main(){
	
	int n, num, i;
	scanf("%d", &n);
	int v[n];

	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	scanf("%d", &num);

	for(i = 0; i < n; i++){
		if(v[i] == num){
			printf("achou\n");
			return 0;
		}
	}

	printf("nao achou\n");

	return 0;
}