/*input
200 4
100 4
100 1
120 2
80 5
40 3
10 1
10 1
20 2
0 0
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

#define MAXFRASES 50
#define MAXCARTAO 1000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, f, cont = 1;
    int res[MAXFRASES+1][MAXCARTAO+1];

    while(cin >> c >> f && c && f)
    {
        vector<int> cust(f+1);
        vector<int> p(f+1);
        
        f(1, f+1)
        {
            cin >> cust[i] >> p[i];
        }
        f(0, c+1)
            res[0][i] = 0;

        /* Problema da mochila 0-1:
       A. c[i][j] = 0                                        , se i=0 ou j=0
       B. c[i][j] = c[i-1][j]                                , se peso[i] > j
       C. c[i][j] = max(valor[i]+c[i-1][j-peso[i]],c[i-1][j]), se i>0 e j > peso[i]
       */
        for(int i = 1;i <= f;i++)
        {
            res[i][0] = 0; /* A. */
            for(int j=1;j <= c;j++)
            {
                if(cust[i] > j)
                {
                    res[i][j] = res[i-1][j]; /* B. */
                }
                else /* C. */
                {
                    if((p[i]+res[i-1][j-cust[i]]) > res[i-1][j])
                        res[i][j] = p[i]+res[i-1][j-cust[i]];
                    else 
                        res[i][j] = res[i-1][j];
                }
            }
        }
        cout << "Teste " << cont << endl;
        cout << res[f][c] << endl << endl;
        cont++;
    }
    
    return 0;
}