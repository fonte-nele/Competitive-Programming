#include <stdio.h>

int main(){
	
	int r, i, dia = 1;
	while(scanf("%d", &r) != EOF){
		int cod[r], nota[r];

		for(i = 0; i < r; i++){
			scanf("%d %d", &cod[i], &nota[i]);
		}
		int maiorN = nota[0], maiorC = cod[0];

		for(i = 1; i < r; i++){
			if(nota[i] > maiorN){
				maiorN = nota[i];
				maiorC = cod[i];
			}else if(nota[i] == maiorN){
				if(maiorC > cod[i])
					maiorC = cod[i];
			}
		}
		printf("Dia %d\n", dia);
		printf("%d\n\n", maiorC);
		dia++;
	}

	return 0;
}