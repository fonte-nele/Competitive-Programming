#include <stdio.h>

int main(){

	int d1, m1, a1, d2, m2, a2, d, m, a;

	scanf("%d %d %d", &d1, &m1, &a1);
	scanf("%d %d %d", &d2, &m2, &a2);

	if(d1 > 31 || d2 > 31 || m1 > 12 || m2 > 12 || (a2 < a1)){
		printf("data invalida\n");
	}else{

		if(a2 == a1 && m2 < m1){
			printf("data invalida\n");
			return 0;
		}else if(a2 == a1 && m2 == m1 && d2 < d1){
			printf("data invalida\n");
			return 0;
		}

		a = a2 - a1;
		m = m2 - m1;
		d = d2 - d1;

		if(m2 < m1){
			m += 12;
			a--;
		}
		if(d2 < d1){
			d += 31;
			m--;
		}
		printf("%d\n%d\n%d\n", a, m, d);
	}

	return 0;
}