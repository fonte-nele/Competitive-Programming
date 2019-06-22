#include <stdio.h>

int main(){
	
	int i, n, v, somaA = 0, somaB = 0, d;
	char op;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %c", &v, &op);
		
		somaA += v;
		if(op == 'C'){
			somaB += v;
		}else{
			d = v%5;
			if(d < 3){
				somaB += (v - d);
			}else{
				somaB += (v + (5 - d));
			}
		}
	}
	printf("%d %d\n", somaA, somaB - somaA);


	return 0;
}	