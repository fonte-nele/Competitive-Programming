#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

vector<ulli> primosAte(ulli n)
{
	vector<ulli> v;

	if(n < 2)
		return v;

	//Crivo de Eratostenes!!!
	v.push_back(2);
	ulli limite = sqrt(n);
	for(ulli i = 3; i <= limite; i += 2)
	{
		bool primo = true;
		ulli limit = sqrt(i);

		for(ulli j : v)
		{
			if(!primo || j > limit)
				break;

			primo = i % j != 0;
		}
		if(primo)
			v.push_back(i);
	}
	return v;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int cont = 0;
	ulli num, i, limite;

	cin >> num;

	//Crivo!
	vector<ulli> primos = primosAte(num);
	limite = primos.size();

	//Impressao dos numeros primos gerados pelo crivo!!!
	/*for(int j = 0; j < limite; j++)
	{
		cout << primos[j] << endl;
	}*/

	for(i = 0; i < limite; i++)
	{
		if(num % primos[i] == 0)
		{	
			while(num % primos[i] == 0)
				num/=primos[i];
			
			cont++;
		}
	}
	if(num != 1)	//Caso n eh um primo maior que os guardados no vetor!
	{
		cont++;
	}
	//Formula: 2^n - 1 - n !!!
	cout << pow(2, cont) - 1 - cont << endl;

	//Combinacao !!!
	/*if(cont < 2)
        cout << 0 << endl;
    else if(cont == 2)
        cout << 1 << endl;
    else
    {
        ulli ant = cont, soma = 0;
 
        ulli a = cont-1, b = 2;
 
        while(a>0)	// Arranjo dos primos, sem repeticao
        {
            ant *= a;
            ant /= b;
            soma += ant;
            --a; b++;
        }
 
        cout << soma << endl;
    }*/
	return 0;
}