#include <stdio.h>

int main(){
	
	int n, soma = 0;
	
	while(scanf("%d", &n) && n != 0){
		if(n % 2 == 0)
			soma += n;
	}
	printf("%d\n", soma);

	return 0;
}