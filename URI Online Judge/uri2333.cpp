#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

vector<bool> crivo(int limit)
{
    vector<bool> primes(limit, true);

    primes[0] = false;
    primes[1] = false;

    for(long long i = 2; i < (int)sqrt(limit) + 1; i++)
    {
        if(primes[i])
        {
            for(long long j = i + i; j < limit; j += i)
            {
                primes[j] = false;
            }
        }
    }

    return primes;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, valor, cont;
    bool flag;
    vector<bool> primos = crivo(1000001);

    while(cin >> n)
    {
        flag = true;
        cont = 0;
        f(0, n)
        {
            cin >> valor;
            
            if(primos[valor])
            {
                flag = false;
                if(cont == 0)
                    cout << valor;
                else
                    cout << " " << valor;
                cont++;
            }
        }
        if(flag)
            cout << "*" << endl;
        else
            cout << endl;
    }

    return 0;
}