#include <stdio.h>

int main(){
	
	int m, cont = 1;
	while(scanf("%d", &m) && m){
		int i, soma, num;
		char op;

		scanf("%d", &soma);
		for(i = 0; i < m-1; i++){
			scanf("%c%d", &op, &num);
			if(op == '+')
				soma += num;
			else
				soma -= num;
		}
		printf("Teste %d\n", cont);
		printf("%d\n\n", soma);

		cont++;
	}

	return 0;
}