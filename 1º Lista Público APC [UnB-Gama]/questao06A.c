#include <stdio.h>

int main(){
	
	int n, cont = 0;
	while(scanf("%d", &n) != EOF){
		cont++;
	}
	printf("%d\n", cont);

	return 0;
}