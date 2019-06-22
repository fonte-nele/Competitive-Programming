#include <stdio.h>

int main(){
	
	int n, i, c, t, soma = 0;
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &c);
		soma += c;
	}
	scanf("%d", &t);

	if(soma == t)
		printf("Acertou\n");
	else
		printf("Errou\n");


	return 0;
}