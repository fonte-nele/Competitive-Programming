#include <stdio.h>

int main(){
	
	double hora;

	scanf("%lf", &hora);

	printf("%.lf\n", hora*60);
	printf("%.lf\n", hora*3600);

	return 0;
}