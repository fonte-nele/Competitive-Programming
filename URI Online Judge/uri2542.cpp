#include <iostream>
using namespace std;

int main()
{
	int quant, linha1, linha2, i, j, carta1, carta2, atributo;

	while(cin >> quant)
	{
		cin >> linha1 >> linha2;
		int m1[linha1][quant];
		int m2[linha2][quant];

		for(i = 0; i < linha1; i++)
		{
			for(j =0; j < quant; j++)
			{
				cin >> m1[i][j];
			}
		}
		for(i = 0; i < linha2; i++)
		{
			for(j =0; j < quant; j++)
			{
				cin >> m2[i][j];
			}
		}

		cin >> carta1 >> carta2;
		cin >> atributo;
		
		if(m1[carta1-1][atributo-1] > m2[carta2-1][atributo-1])
		{
			cout << "Marcos" << endl;
		}
		else
		{
			if(m1[carta1-1][atributo-1] < m2[carta2-1][atributo-1])
				cout << "Leonardo" << endl;
			else
				cout << "Empate" << endl;
		}
	}
	return 0;
}