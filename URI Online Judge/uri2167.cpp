#include <iostream>
using namespace std;

int main()
{
	int i, indice = 0, quant, flag = 1;
	cin >> quant;

	int v[quant];

	cin >> v[0];
	for(i = 1; i < quant; i++)
	{
		cin >> v[i];
		if(v[i] < v[i-1] && flag == 1)
		{
			indice = i+1;
			flag = 0;
		}
	}
	cout << indice << endl;

	return 0;
}