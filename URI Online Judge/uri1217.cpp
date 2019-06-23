#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    int i, k, quant, cont, tam, total = 0;
    string linha;
    float valor, soma = 0;

    cin >> quant;
	for(k = 0; k < quant; k++)
	{
		cin >> valor;
		soma += valor;
		
		getline(cin, linha);
		getline(cin, linha);
		tam = linha.size();
		cont = 1;
		for(i = 0; i < tam; i++)
		{
			if(linha[i] == ' ')
			{
				cont ++;
			}
		}
		total += cont;

		cout << "day " << k+1 << ": " << cont << " kg" << endl;
	}
	cout << fixed << setprecision(2) << (double)total/quant << " kg by day" << endl;
	cout << "R$ " << fixed << setprecision(2) << soma/quant << " by day" << endl;

    return 0;
}