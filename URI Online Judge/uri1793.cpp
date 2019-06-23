/*input
1
5
2
12 25
2
13 16
5
15 20 29 31 50
0
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while(cin >> n && n != 0)
    {
        int soma = 0;
        int atual, ant = -1;
        f(0, n)
        {
            cin >> atual;
            if(ant == -1)
            {
                ant = atual;
                soma += 10;
            }
            else
            {
                if(atual - ant > 10)
                    soma += 10;
                else
                    soma += (atual - ant);

                ant = atual;
            }

            
            //cout << v[i] << endl;
        }

        cout << soma << endl;
    }
    return 0;
}