#include <stdio.h>

int main(){
	
	int n, c, d;
	while(scanf("%d %d %d", &n, &c, &d) && n+c+d){
		printf("%d\n", n*(c*d));
	}

	return 0;
}