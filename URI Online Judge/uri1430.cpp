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

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    st hit;
    int cont;
    double soma, valor;

    while(cin >> hit && hit != "*")
    {
        soma = 0;
        cont = 0;
        int tam = (int)hit.size();

        f(1, tam)
        {
            if(hit[i] == '/')
            {
                //cout << soma << endl;
                if(soma == 1.0)
                    cont++;
                soma = 0;
                continue;
            }
            if(hit[i] == 'W')
                valor = 1.0;
            else if(hit[i] == 'H')
                valor = 0.5;
            else if(hit[i] == 'Q')
                valor = 0.25;
            else if(hit[i] == 'X')
                valor = 0.015625;
            else if(hit[i] == 'T')
                valor = 0.03125;
            else if(hit[i] == 'E')
                valor = 0.125;
            else if(hit[i] == 'S')
                valor = 0.0625;

            soma += valor;
        }

        cout << cont << endl;

    }

    return 0;
}