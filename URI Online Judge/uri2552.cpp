#include <iostream>
using namespace std;

int main()
{
	int linhas, colunas, i, j, cont, valor;

	while(cin >> linhas >> colunas)
	{
		int m[linhas][colunas];

		cont = 0;
		valor = 0;
		for(i = 0; i < linhas; i++)
		{
			for(j =0; j < colunas; j++)
			{
				cin >> m[i][j];
			}
		}

		for(i = 0; i < linhas; i++)
		{
			for(j =0; j < colunas; j++)
			{
				if(m[i][j] == 1)
				{
					cout << 9;
					cont ++;
					if(cont == colunas)
					{
						cout << endl;
						cont = 0;
					}
				}
				else
				{
					if(m[i][j-1] == 1 && j-1 >= 0)
						valor++;
					if(m[i][j+1] == 1 && j+1 < colunas)
						valor++;
					if(m[i-1][j] == 1 && i-1 >= 0)
						valor++;
					if(m[i+1][j] == 1 && i+1 < linhas)
						valor++;

					cout << valor;
					cont++;
					if(cont == colunas)
					{
						cout << endl;
						cont = 0;
					}
					valor = 0;
				}
			}
		}
	}
	return 0;
}