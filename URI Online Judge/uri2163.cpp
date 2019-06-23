#include <iostream>
using namespace std;

int main()
{
	int linhas, colunas, i, j, flag = 0;

	cin >> linhas >> colunas;

	int m[linhas][colunas];

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
			if(m[i][j] == 42)
			{
				if(m[i][j-1] == 7 && m[i][j+1] == 7 && m[i-1][j] == 7 && m[i-1][j-1] == 7 && m[i-1][j+1] == 7 && m[i+1][j] == 7 && m[i+1][j-1] == 7 && m[i+1][j+1] == 7)
				{
					cout << i+1 << " " << j+1 << endl;
					flag = 1;
					break;
				}
			}
		}
	}
	if(!flag)
	{
		cout << "0 0" << endl;
	}
	return 0;
}