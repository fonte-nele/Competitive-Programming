#include <stdio.h>

int main(){
	
	int i, qtd, a, b, c, somaA = 0, somaB = 0, somaC = 0;

	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++){
		scanf("%d %d %d", &a, &b, &c);
		somaA += a;
		somaB += b;
		somaC += c;
	}

	if(somaA == somaB && somaA == somaC){
		printf("A, B e C\n");
	}else if(somaA > somaC && somaA == somaB){
		printf("A e B\n");
	}else if(somaA > somaB && somaA == somaC){
		printf("A e C\n");
	}else if(somaB > somaA && somaB == somaC){
		printf("B e C\n");
	}else if(somaA > somaB && somaA > somaC){
		printf("A\n");
	}else if(somaB > somaA && somaB > somaC){
		printf("B\n");
	}else if(somaC > somaA && somaC > somaB){
		printf("C\n");
	}

	return 0;
}