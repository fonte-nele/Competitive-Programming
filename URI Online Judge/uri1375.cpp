/*input
4
1 0
3 1
2 -1
4 0
4
22 1
9 1
13 0
21 -2
3
19 1
9 -345
17 0
7
2 2
8 0
5 -2
7 1
1 1
9 1
3 -3
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
        bool flag = true;
        vector<ii> v(n);
        f(0, n)
        {
            cin >> v[i].fi >> v[i].se;
            //cout << v[i].fi << " seg " << v[i].se << endl;
        }
        vector<int> pos(n, -1);
        int valor;
        f(0, n)
        {
            valor = i + v[i].se;
            //cout << valor << endl;
            if(valor < 0 || valor >= n)
            {
                flag = false;
            }
            else if(pos[valor] == -1)
            {
                pos[valor] = v[i].fi;
            }
            else
                flag = false;
        }
        if(!flag)
            cout << -1 << endl;
        else
        {
            f(0, n)
            {
                if(i == 0)
                    cout << pos[i];
                else
                    cout << " " << pos[i];
            }
            cout << endl;
        }

    }


    return 0;
}