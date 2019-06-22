#include <stdio.h>

int encaixa(int a, int b){
    int j;
    for (j = 0; j < 14; j++) if (b / pow(10, j) < 1) break;
    long long powe = pow(10, j);
    if ((a - b) % powe == 0) 
    	return 1; 
    else 
    	return 0;

}

int segmento(int a, int b){
    int maior, seq = 0;
    maior = a;
    if(a < b){
        a = b;
        b = maior;
        maior = a;
    }
    
    while((maior >= b) && seq == 0){
        if(encaixa(maior, b) == 1)
            seq = 1;
        maior = maior/10;
    }

    if(seq == 1)
        return 1;
    else
        return 0;
}

int main(){
	
	int n = encaixa(2457,245);
    int m = segmento(235, 2);
	printf("%d\n", n);
    printf("%d\n", m);

	return 0;
}