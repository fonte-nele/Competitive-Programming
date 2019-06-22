#include <stdio.h>

int main(){
	
	int e1, a, b;
	char j1, j2, campeao;
	scanf("%d %d %d", &e1, &a, &b);
	if((e1 == 0 && (a+b) % 2 == 0) || (e1 == 1 && (a+b) % 2 != 0)){
		j1 = 'A';
	}else{
		j1 = 'B';
	}
	scanf("%d %d %d", &e1, &a, &b);
	if((e1 == 0 && (a+b) % 2 == 0) || (e1 == 1 && (a+b) % 2 != 0)){
		j2 = 'C';
	}else{
		j2 = 'D';
	}
	scanf("%d %d %d", &e1, &a, &b);
	if((e1 == 0 && (a+b) % 2 == 0) || (e1 == 1 && (a+b) % 2 != 0)){
		campeao = j1;
	}else{
		campeao = j2;
	}
	printf("%c\n", campeao);

	return 0;
}