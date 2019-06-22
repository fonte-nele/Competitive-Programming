#include <stdio.h>

int main(){
	
	int i, n;
	scanf("%d", &n);

	int v[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	int menor, menor1, menor2;
	menor = menor1 = menor2 = v[0];

	for(i = 1; i < n; i++){
		if(v[i] < menor){
			menor2 = menor1;
			menor1 = menor;
			menor = v[i];
		}else if(v[i] < menor1){
			menor2 = menor1;
			menor1 = v[i];
		}else if(v[i] < menor2){
			menor2 = v[i];
		}
	}

	printf("%d\n", menor1);
	printf("%d\n", menor2);

	return 0;
}