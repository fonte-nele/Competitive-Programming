#include <stdio.h>

int verificaBissexto(int a){
	if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)){
		return 1;
	}else{
		return 0;
	}
}

void calculaDiaMes(int d, int a, int b){

	if(d > 366 || (d > 365 && b == 0)){
		printf("Entradas invalidas!\n");
		return;
	}

	int m = 1;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 28 && b == 0){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}else if(d <= 29 && b == 1){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	if(b == 0)
		d -= 28;
	else
		d -= 29;
	m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 30){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 30, m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 30){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 30, m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 30){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 30, m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 31, m++;
	if(d <= 30){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
	d -= 30, m++;
	if(d <= 31){
		printf("%02d/%02d/%04d\n", d, m, a);
		return;
	}
}

int main(){
	
	int d, a, b;
	scanf("%d %d", &d, &a);

	b = verificaBissexto(a);
	calculaDiaMes(d, a, b);
	

	return 0;
}