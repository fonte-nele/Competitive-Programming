#include <stdio.h>

int main(){
	
	unsigned long long int cpf;
	scanf("%llu", &cpf);

	int i, div, last, alast, soma1, soma2 = 0, m = 2, ans1, ans2;

	last = cpf % 10;
	cpf /= 10;
	alast = cpf % 10;
	soma1 = alast * m;
	m++;
	cpf /= 10;
	for(i = 0; i < 9; i++){
		div = cpf % 10;
		soma1 += (div * m);
		soma2 += (div * (m-1));
		//printf("Soma1 = %d\n", soma1);
		//printf("Soma2 = %d\n", soma2);

		cpf /= 10;
		m++;
	}
	ans1 = (soma1 % 11);
	ans2 = (soma2 % 11);
	ans1 = 11 - ans1;
	ans2 = 11 - ans2;
	if(ans1 > 9)
		ans1 = 0;
	if(ans2 > 9)
		ans2 = 0;

	if(ans1 == last && ans2 == alast){
		printf("valido\n");
	}else{
		printf("invalido\n");
	}

	return 0;
}