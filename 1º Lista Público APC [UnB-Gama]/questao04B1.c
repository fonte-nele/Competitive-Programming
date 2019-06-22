#include <stdio.h>

int main(){
	
	int n, soma1 = 0, soma2 = 0;
	
	while(scanf("%d", &n) && n != 0){
		if(n % 2 == 0)
			soma1 += n;
		else
			soma2 += n;
	}
	printf("%d %d\n", soma1, soma2);

	return 0;
}