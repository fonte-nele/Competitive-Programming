#include <iostream>
using namespace std;

int main()
{
	int duracao, dist, quant, i;
	double ant;

	while(cin >> quant)
	{
		cin >> duracao >> dist;
		ant = dist / (double)duracao;

		cout << 1 << endl;

		for(i = 1; i < quant; i++)
		{
			cin >> duracao >> dist;
			if(dist / (double)duracao > ant)
			{
				cout << i+1 << endl;
				ant = dist / (double)duracao;
			}		
		}
	}
	return 0;
}