#include <iostream>
#include <string>
using namespace std;

int main () 
{
	int i, cont = 0, pos, tam1, tam2, k = 1;
	string num1, num2, aux;

	while(cin >> num1 >> num2)
	{
		tam1 = num1.size();
		tam2 = num2.size();
		for(i = 0; i < tam2; i++)
		{
			if(num1[0] == num2[i])
			{
				aux = num2.substr(i,tam1);

				if(num1 == aux)
				{
					cont++;
					pos = i+1;
				}
			}
		}
		
		cout << "Caso #" << k << ":" << endl;
		if(cont == 0)
		{
			cout << "Nao existe subsequencia" << endl << endl;
		}
		else
		{
			cout << "Qtd.Subsequencias: " << cont << endl;
			cout << "Pos: " << pos << endl << endl;
		}
		k++;
		cont = 0;
	}
	

	return 0;
}