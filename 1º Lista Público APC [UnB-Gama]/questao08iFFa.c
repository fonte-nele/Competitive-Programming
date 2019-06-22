#include <stdio.h>

int encaixa(int a, int b){
	//long long a, b;
    //scanf("%lld%lld", &a, &b);
    int j;
    for (j = 0; j < 14; j++) if (b / pow(10, j) < 1) break;
    long long powe = pow(10, j);
    if ((a - b) % powe == 0) 
    	return 1; 
    else 
    	return 0;

}

int main(){
	
	int n = encaixa(2457,245);

	printf("%d\n", n);

	return 0;
}