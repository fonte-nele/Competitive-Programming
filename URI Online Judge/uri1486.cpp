/*input
2 2 2
1 1
1 1
4 5 3
0 1 0 1
1 1 1 1
1 0 0 1
1 0 1 1
1 1 0 0
0 0 0
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, n, c, cont, res;

    while(cin >> p >> n >> c && p && n && c)
    {
        res = 0;
        int m[n][p];
        f(0, n)
        {
            fr(0, p)
            {
                cin >> m[i][j];
            }
        }
        f(0, p)
        {
            cont = 0;
            fr(0, n)
            {
                //cout << m[j][i] << " ";
                if(m[j][i] == 1){
                    cont++;
                }
                else
                {
                    //cout << cont << " cc" << endl;
                    if(cont >= c)
                        res++;
                    cont = 0;
                }
            }
            //cout << cont << " cc" << endl;
            if(cont >= c)
                res++;
            //cout << endl;
        }
        
        cout << res << endl;
    }
    return 0;
}