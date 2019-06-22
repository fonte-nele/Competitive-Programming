#include <stdio.h>

int main(){
	
	int n, j1, j2, cont = 1, i;
	char nome1[15], nome2[15];

	while(scanf("%d", &n) && n != 0){

		scanf("%s", nome1);
		scanf("%s", nome2);

		printf("Teste %d\n", cont);
		for(i = 0; i < n; i++){
			scanf("%d %d", &j1, &j2);
			//printf("%d j2 = %d\n", j1, j2);
			if((j1+j2) % 2 == 0){
				printf("%s\n", nome1);
			}else{
				printf("%s\n", nome2);
			}
		}
		printf("\n");
		cont++;
	}

	return 0;
}