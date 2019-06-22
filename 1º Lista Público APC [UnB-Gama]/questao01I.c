#include <stdio.h>

int main(){
	
	int l, d, k, p, soma;

	scanf("%d %d", &l, &d);
	scanf("%d %d", &k, &p);

	soma = l / d;

	printf("%d\n", k*l + soma*p);

	return 0;
}