#include <stdio.h>

int main(){
	
	int h, m, s;
	while(scanf("%d:%d:%d", &h, &m, &s) != EOF){
		int seg = 0;
		seg += (60 - s);
		m++;
		seg += (60 - m) * 60;
		h++;
		seg += (24 - h) * 3600;

		printf("%d\n", seg);
	}

	return 0;
}