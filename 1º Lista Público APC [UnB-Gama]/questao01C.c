#include <stdio.h>

int main(){
	double dist, tempo;
	scanf("%lf %lf", &dist, &tempo);
	printf("%.2lf\n", dist/tempo);

	return 0;
}