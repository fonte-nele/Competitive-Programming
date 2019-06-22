#include <stdio.h>

int main(){
	
	int c1, c2, c3, t, soma;
	scanf("%d %d %d", &c1, &c2, &c3);
	scanf("%d", &t);

	soma = c1 + c2 + c3;
	if(soma == t)
		printf("Acertou\n");
	else
		printf("Errou\n");


	return 0;
}