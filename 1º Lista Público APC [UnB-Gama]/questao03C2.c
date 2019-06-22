#include <stdio.h>

int main(){
	
	int p, q, r;
	scanf("%d %d %d", &p, &q, &r);

	if(p == 0){
		if(r == 0)
			printf("MI\n");
		else
			printf("MM\n");
	}else if(p == 1){
		if(q == 0)
			printf("MS\n");
		else
			printf("SS\n");
	}

	return 0;
}