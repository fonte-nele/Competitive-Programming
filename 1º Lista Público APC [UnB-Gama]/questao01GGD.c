#include <stdio.h>

int main(){
	
	int hora, soma = 30;

	scanf("%d", &hora);

	if(hora > 20){
		hora -= 20;
		soma += hora*3;
	}

	printf("%d\n", soma);

	return 0;
}