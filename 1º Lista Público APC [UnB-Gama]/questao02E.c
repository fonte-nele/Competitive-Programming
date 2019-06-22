#include <stdio.h>

int main(){
	
	int i, v[5], menor = 0, maior = 0;

	for(i = 0; i < 5; i++){
		scanf("%d", &v[i]);
	}
	
	if(v[1] > v[0])
		maior = 1;
	else
		menor = 1;
	for(i = 2; i < 5; i++){
		if(maior == 1 && v[i] < v[i-1])
			maior = 0;
		else if(menor == 1 && v[i] > v[i-1])
			menor = 0;
	}

	if(maior == 1)
		printf("C\n");
	else if(menor == 1)
		printf("D\n");
	else
		printf("N\n");

	return 0;
}