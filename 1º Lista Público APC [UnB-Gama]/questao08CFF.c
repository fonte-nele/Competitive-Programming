#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
	int num, soma, i;

	scanf("%d", &soma);
	for(i = 1; i < parcelas; i++){
		scanf("%d", &num);
		if(op == '-'){
			soma -= num;
		}else{
			soma += num;
		}
	}
	return soma;
}

int main(){
	
	int n = faz_conta_direito(4, '+');

	printf("%d\n", n);

	return 0;
}