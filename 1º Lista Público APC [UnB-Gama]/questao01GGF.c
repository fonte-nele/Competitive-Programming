#include <stdio.h>

int validaPeso(double);
void fazTonelada(double);
void fazGrama(double);

int main(){
	
	double pesoKg;

	do{
		scanf("%lf", &pesoKg);
	}while(!validaPeso(pesoKg));

	fazGrama(pesoKg);
	fazTonelada(pesoKg);

	return 0;
}

int validaPeso(double peso){
	if(peso < 0.0)
		return 0;
	else
		return 1;
}

void fazGrama(double peso){
	double p = peso * 1000;
	printf("%.4lf\n", p);
}

void fazTonelada(double peso){
	double p = peso / 1000;
	printf("%.4lf\n", p);
}