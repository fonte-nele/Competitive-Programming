#include <stdio.h>

int main(){
	
	int i, j, n;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++){
			if(j == 0)
				printf("%02d", i);
			else
				printf(" %02d", i);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++){
			if(j == 0)
				printf("%02d", j+1);
			else
				printf(" %02d", j+1);
		}
		printf("\n");
	}
	return 0;
}	