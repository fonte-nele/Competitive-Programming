#include <stdio.h>

int main(){
	
	int i, n, a, soma = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a);
		soma += a;
	}
	printf("%d\n", soma);

	return 0;
}