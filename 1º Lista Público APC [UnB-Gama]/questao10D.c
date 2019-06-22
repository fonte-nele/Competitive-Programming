#include <stdio.h>
#define MOD 1300031


int main(){
    int t, n, i;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int v[n];

        for(i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }

        long long soma = 0;
        long long total = 0;
        /*for(i = 0; i < n; i++){
            for(j = i; j < n; j++){
                soma += v[i] * v[j];
            }
        }*/
        
        for(i = n-1; i >= 0; i--){
            soma += v[i];
            if(soma >= MOD)
                soma %= MOD;

            total += v[i] * soma;
            if(total >= MOD)
                total %= MOD;
        }
        
        printf("%d\n", (int)total);
    }

	return 0;
}