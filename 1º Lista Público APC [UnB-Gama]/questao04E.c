#include <stdio.h>

int main(){
	
	int n, m, i, j;
	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("[%03d,%03d]", i, j);
		}
		printf("\n");
	}

	return 0;
}