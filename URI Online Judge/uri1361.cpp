/*input
2
5
7
-2
6
9
-3
8
11
-9
2
5
18
17
-15
4
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

bool comp(const ll& p1, const ll& p2)
{
    return p1 > p2;
}

ll sim(vector<ll> &a, vector<ll> &b) 
{
    ll len = 0;
    ll i = 0, j = 0, ant = 0;
    while (true) 
    {
        while (i < a.size() && a[i] <= ant)
            i++;

        if (i == a.size())
            break;

        ant = a[i];

        len++;
        while (j < b.size() && b[j] <= ant)
            j++;

        if (j == b.size())
            break;
        ant = b[j];
        len++;
    }
    return len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant, pisos, tam, ant;
    cin >> quant;

    while(quant--)
    {
        cin >> pisos;
        vector<ll> azul;
        vector<ll> vermelho;

        f(0, pisos)
        {
            cin >> tam;
            //cout << tam << endl;
            if(tam > 0)
            {
                azul.pb(tam);
            }
            else
            {
                vermelho.pb(abs(tam));
            }
        }
        sort(all(azul));
        sort(all(vermelho));
        
        cout << max(sim(azul, vermelho), sim(vermelho, azul)) << endl;
    }
    return 0;
}