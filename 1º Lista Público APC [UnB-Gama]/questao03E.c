#include <stdio.h>

int main(){
	
	int n, i;
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		if(i % 2 == 0){
			printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
		}else{
			printf("THUMS THUMS THUMS\n");
		}
	}

	return 0;
}