#include <stdio.h>

int main(){
	
	int a, b, c, x, y, z;

	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &x, &y, &z);

	x /= a;
	y /= b;
	z /= c;

	printf("%d\n", x*y*z);

	return 0;
}