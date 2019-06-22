#include <stdio.h>

int main(){
	double p[3], t, l[5], soma = 0, media;

	int i;
	for(i = 0; i < 3; i++){
		scanf("%lf", &p[i]);
	}
	scanf("%lf", &t);
	for(i = 0; i < 5; i++){
		scanf("%lf", &l[i]);
		soma += l[i];
	}
	soma /= 10;

	media = (p[0] + 2*p[1] + 3*p[2] + 2*t)/8.0 + soma;

	printf("%.2lf\n", media);

	return 0;
}