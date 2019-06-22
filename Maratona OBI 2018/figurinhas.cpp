#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, m, cont;

    cin >> n >> c >> m;
    cont = c;
	vector<int> carimbadas(c), compradas(m);
    
    f(0, c)
    {
    	cin >> carimbadas[i];
    }
	f(0, m)
	{
		cin >> compradas[i];
	}
	f(0, c)
	{
		fr(0, m)
		{
			if(compradas[j] == carimbadas[i])
			{
				cont --;
				break;
			}
		}
	}

	cout << cont << endl;
    return 0;
}