#include <stdio.h>

int calculaQtdAnos(int pa, int pb, double ga, double gb){
	int cont = 0;

	while(pa <= pb){
		pa += (pa/100.0 * ga);
		pb += (pb/100.0 * gb);
		cont++;
		//printf("pa = %d pb = %d\n", pa, pb);
		if(cont > 100)
			return -1;
	}
	return cont;
}

int main(){
	
	int n, i, pa, pb;
	double ga, gb;
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
		int res = calculaQtdAnos(pa, pb, ga, gb);
		printf("%d\n", res);
	}

	return 0;
}