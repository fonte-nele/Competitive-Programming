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
	int i, tam, cont, pos;
	string linha;

	while(getline(cin, linha))
	{
		pos = 0;
		cont = 0;
		tam = linha.size();

		for(i = 0; i < tam; i++)
		{
			if(linha[i] != '(' && linha[i] != ')')
			{
				linha.erase(i,1);
				tam--;
				i--;
			}
		}

		while(pos != -1)
		{
			pos = linha.find("()", 0);

			if(pos == -1)
			{
				break;
			}
			linha.erase(pos, 2);	
		}
		pos = 0;

		while(pos != -1)
		{
			pos = linha.find('(', 0);

			if(pos == -1)
			{
				break;
			}
			cont++;
			break;
		}
		pos = 0;
		while(pos != -1)
		{
			pos = linha.find(')', 0);

			if(pos == -1)
			{
				break;
			}
			cont++;
			break;
		}
		
		if(cont == 0)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;		
	}
	return 0;
}