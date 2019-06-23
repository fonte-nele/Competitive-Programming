/*#include <iostream>
#include <vector>
#define ll long long
#define pb push_back

using namespace std;

const int N = 1e5+5;

int p[N], k;
vector <int> primes;

int main () 
{
	int i;
    for(ll i = 2; i <= N; ++i)
    {
    	if(!p[i]) 
	    {
	        for(ll j = i*i; j <= N; j+=i)
	        {
	            p[j]=1;
	        }
	        primes.pb(i);
	    }
	}
    int n;
    cin >> n;
    for(i = 0; i < n; i++) 
    {
        cin >> k;
        int found = 0;
        for(ll j = 0; j < primes.size() && primes[j]*primes[j] <= k; j++) 
        {
            if(k % primes[j] == 0) 
            {
                cout << "Not Prime" << endl;
                found = 1;
                break;
            }
        }
        if(!found)
        { 
        	cout << "Prime" << endl;
        }
    }
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j, tam, quant, cont1, cont2, pos1, pos2;
	string linha, time1, time2;

	cin >> quant;

	getline(cin, linha);
	for(i = 0; i < quant; i++)
	{
		cont1 = 0;
		cont2 = 0;
		pos1 = -1;
		pos2 = -1;
		getline(cin, linha);
		getline(cin, time1);
		getline(cin, time2);

		tam = linha.size();

		for(j = 0; j < tam; j++)
		{
			if(linha[j] == time1[j] && linha[j] == time2[j])
			{	
				cont1 ++;
				cont2 ++;
			}
			else
			{
				if(linha[j] == time1[j])
				{
					cont1 ++;
					if(pos1 == -1)
					{
						pos1 = j;
					}
				}
				else
				{
					if(linha[j] == time2[j])
					{
						cont2 ++;
						if(pos2 == -1)
						{
							pos2 = j;
						}
					}
				}
			}
		}
		cout << "Instancia " << i+1 << endl;
		if(cont1 > cont2)
		{
			cout << "time 1" << endl << endl;
		}
		else
		{ 
			if(cont1 < cont2)
			{
				cout << "time 2" << endl << endl;
			}
			else
			{
				if(pos1 < pos2)
					cout << "time 1" << endl << endl;
				else if(pos1 > pos2)
					cout << "time 2" << endl << endl;
				else
					cout << "empate" << endl << endl;
			}
		}
	}
	return 0;
}
