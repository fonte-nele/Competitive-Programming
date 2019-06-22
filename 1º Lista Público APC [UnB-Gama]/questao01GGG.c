#include <stdio.h>

int main(){
	
	int i = 0, media = 0, maior = 0, pos;
	int idade[85];

	while(scanf("%d", &idade[i]) && idade[i] != -1){
		//printf("%d\n", idade[i]);
		if(idade[i] > maior){
			maior = idade[i];
			pos = i;
		}
		media += idade[i];
		i++;
	}
	//printf("I = %d\n", i);
	printf("%d\n", media/i);
	printf("%d %d\n", maior, pos);

	return 0;
}