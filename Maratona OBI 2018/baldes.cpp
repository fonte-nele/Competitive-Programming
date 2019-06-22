#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, quant, p, tipo, peso, balde, b1, b2, tam, maior_ant, menor_ant, maior_at, menor_at, maior;
	cin >> num >> quant;

	vector<int> adj[num];

	for(int i=0; i < num; i++)
	{
		cin >> p;
		adj[i].push_back(p);
	}
	
	for(int i=0; i < quant; i++)
	{
		cin >> tipo;
		if(tipo == 1){
			cin >> peso >> balde;
			adj[balde-1].push_back(peso);
		}
		else{
			cin >> b1 >> b2;
			maior = 0;
			
			for(int j = b1-1; j < b2-1; j++)
			{
				tam = adj[j].size();
				if(tam == 1){
					maior_ant = menor_ant = adj[j][0];
					//cout << maior_ant << " aqui " << menor_ant << endl;
				}
				else{
					auto result = minmax_element(adj[j].begin(), adj[j].end());

					menor_ant = *result.first;
					maior_ant = *result.second;
					//cout << maior_ant << " " << menor_ant << endl;
				}
				
				tam = adj[j+1].size();
				if(tam == 1){
					maior_at = menor_at = adj[j+1][0];
					//cout << maior_at << " aqui " << menor_at << endl;
				}
				else{
					auto result = minmax_element(adj[j+1].begin(), adj[j+1].end());

					menor_at = *result.first;
					maior_at = *result.second;
					//cout << maior_at << " " << menor_at << endl;
				}
				if(abs(maior_at - maior_ant) > maior)
					maior = abs(maior_at - maior_ant);
				if(abs(maior_at - menor_ant) > maior)
					maior = abs(maior_at - menor_ant);
				if(abs(menor_at - maior_ant) > maior)
					maior = abs(menor_at - maior_ant);
				if(abs(menor_at - menor_ant) > maior)
					maior = abs(menor_at - menor_ant);
				cout << maior << " aqui" << endl;
			}
			cout << maior << endl;
		}
	}
	/*for(int i=0; i < num; i++)
	{
		tam = adj[i].size();

		for(int j = 0; j < tam; j++)
		{
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}*/
	 

	return 0;
}
