#include<stdio.h>
#include<math.h>

int main(){

	int Xm, Ym, Xr, Yr, count;
	scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);
	
	count = abs(Xr - Xm) + abs(Yr - Ym);
	
	printf("%d\n", count); 
	
	return 0;
}

