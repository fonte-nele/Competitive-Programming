#include<stdio.h>

int main(){

	
	int c1, c2, c3, c4, c5;
	scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
	if(c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5)
		printf("D\n");
	else if(c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5)
		printf("C\n");
	else printf("N\n");
	
	return 0;	
}

