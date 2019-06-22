#include <stdio.h>

int main(){
	
	int n, c, s, e, i, total = 0;
	char resp = 'N';
	scanf("%d %d", &n, &c);

	for(i = 0; i < n; i++){
		scanf("%d %d", &s, &e);
		total -= s;
		total += e;
		if(total > c){
			resp = 'S';
		}
	}
	printf("%c\n", resp);

	return 0;
}