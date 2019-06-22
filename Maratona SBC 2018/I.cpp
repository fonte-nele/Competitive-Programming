#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,cont = 0,valor,soma = 0,quantA,auxiliar = 0;
	cin >> n >> m;
	int *p = new int[m];
	int aux[1000][1001];
	
	for(int i = 0; i < m; i++){
		p[i] = 1;
	}
	cin >> quantA;
	for(int j = 0; j < quantA;j++){
		cin >> valor;
		p[valor - 1] = 0;
	}
	
	for(int i = 0;i < n;i++){
		cin >> quantA;
		for(int j = 1; j <= quantA;j++){
			cin >> valor;
			aux[i][0] = quantA;
			aux[i][j] = valor - 1;
		}
	}

	for(int i = 0;i < n * 2; i++){
		if(auxiliar == n){
			auxiliar = 0;
		}
		soma = 0;
		for(int j = 1; j <= aux[auxiliar][0];j++){
			if(p[aux[auxiliar][j]] == 0){
				p[aux[auxiliar][j]] = 1;
			}else{
				p[aux[auxiliar][j]] = 0;
			}
		}
		auxiliar++;
		for(int k = 0; k < m;k++){
			soma += p[k];
		}
		if(soma == m){
			cont = i + 1;
			break;
		}
	}
	if(soma == m){
		cout << cont << endl;
	}else{
		cout << "-1" << endl;
	}

return 0;
}
