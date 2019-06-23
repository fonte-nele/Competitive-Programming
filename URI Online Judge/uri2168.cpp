#include <iostream>
using namespace std;

int main()
{
	int quant, i, j;

	cin >> quant;

	int m[quant+1][quant+1];


	for(i = 0; i <= quant; i++)
	{
		for(j =0; j <= quant; j++)
		{
			cin >> m[i][j];
		}
	}
	for(i = 0; i < quant; i++)
	{
		for(j =0; j < quant; j++)
		{
			if(m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1] < 2)
				cout << "U";
			else 
				cout << "S";
		}
		cout << endl;
	}

		
	return 0;
}