#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
	double dif = tB - tA;
	dif /= 3600;
	return distancia/dif;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {
	double dist = calculaVelocidadeMedia(tA, tB, distancia);
	if(dist > velocidadeMaxima)
		return 1;
	else
		return 0;
}

int main(){
	
	double n = calculaVelocidadeMedia(54169,57346,170.0);
	int m = levouMulta(54169,57346,170.0,120.0);
	printf("%.6lf\n", n);
	printf("%d\n", m);

	return 0;
}