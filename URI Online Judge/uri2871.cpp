/*input
3 3
1 1 1
1 1 1
1 1 1
2 5
6 6 6 6 6
6 6 6 6 6
2 2
41 47 
34 40 
3 3
29 4 18 
18 22 44 
5 5 1
*/
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n, soma, valor, saca;
    while(cin >> m >> n)
    {
        soma = saca = 0;
        f(0, m)
        {
            f(0, n)
            {
                cin >> valor;
                soma += valor;
            }
        }

        while(soma >= 60)
        {
            soma -= 60;
            saca++;
        }

        cout << saca << " saca(s) e " << soma << " litro(s)" << endl;
    }

    return 0;
}