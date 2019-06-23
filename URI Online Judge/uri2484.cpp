#include <iostream>
#include <string>
using namespace std;

void imprimir(string linha, int cont, int tam)
{
	int i;
	for(i = 0; i < cont; i++)
	{
		cout << " ";
	}
	for(i = 0; i < tam; i++)
	{
		if(i != tam - 1)
		{
			cout << linha[i] << " ";
		}
		else
		{
			cout << linha[i] << endl;
		}
	}

}

int main()
{
	int i, tam, cont;
	string linha;

	while(cin >> linha)
	{
		tam = linha.size();
		cont = 0;
		
		while(tam >= 1)
		{
			imprimir(linha, cont, tam);

			cont++;
			tam--;
		}
		cout << endl;
	}
	return 0;
}