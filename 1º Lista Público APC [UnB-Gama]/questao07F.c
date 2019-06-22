#include <stdio.h>

int main(){
	
	int i, n;
	scanf("%d", &n);

	int v[n], v1[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &v1[i]);
	}

	for(i = 0; i < n; i++){
		if(i == 0){
			printf("%d",v[i]+v1[i]);
		}else{
			printf(" %d", v[i]+v1[i]);
		}
	}
	printf("\n");

	return 0;
}