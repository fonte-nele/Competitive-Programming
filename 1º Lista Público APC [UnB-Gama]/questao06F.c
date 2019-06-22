#include <stdio.h>

int primo(int num){
	int i, cont = 0;

	for(i = 2; i*i <= num; i++){
		if(num % i == 0){
			cont++;
			break;
		}
	}
	if(cont != 0 || num == 1)
		return 0;
	else
		return 1;
}

char primoArrojado(int num){

	int resp = primo(num);
	if(resp == 0)
		return 'N';
	while(num > 9){
		num /= 10;
		resp = primo(num);
		if(resp == 0)
			return 'N';
	}
	resp = primo(num);
	if(resp == 0)
		return 'N';
	else
		return 'S';
}

int main(){
	
	int n, num, i;
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &num);
		char resp = primoArrojado(num);
		printf("%c\n", resp);
	}

	return 0;
}