#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int n, vagas, aux, quant, valor;
	vector<int> v;
	
	cin >> n >> vagas;
	quant = vagas;
	
	for(int i=0; i <n; i++)
	{
		cin >> aux;
		v.push_back(aux);
	}
	sort(v.begin(),v.end());
	
	valor = v[n-vagas];
	for(int i=(n - vagas-1); i >= 0; i--)
	{
		if(v[i] == valor)
			quant++;
		else
			break;
	}
	
	cout << quant << endl;
	return 0;
}
