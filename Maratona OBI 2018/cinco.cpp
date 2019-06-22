#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int quant, valor, ant = -1;
	bool flag = true;
	cin >> quant;
	
	vector<int> v(quant);

	for(int i=0; i < quant; i++)
	{
		cin >> v[i];
	}
	
	for(int i=0; i < quant; i++)
	{
		if(flag)
		{
			if(v[i] == 0)
			{
				valor = v[i];
				v[i] = v[quant-1];
				v[quant-1] = valor;
				flag = false;
				break;
			}
			else if(v[i] == 5)
			{
				if(v[quant-1] > 5)
				{
					valor = v[i];
					v[i] = v[quant-1];
					v[quant-1] = valor;
					flag = false;
					break;
				}
				ant = i;
			}
		}
	}
	if(ant != -1 && flag)
	{
		flag = false;
		valor = v[ant];
		v[ant] = v[quant-1];
		v[quant-1] = valor;
	}
	if(flag)
		cout << "-1" << endl;
	else
	{
		for(int i=0; i < quant; i++)
		{
			if(i==0)
				cout << v[i];
			else
				cout << " " << v[i];
		}
		cout << endl;
	}


	return 0;
}
