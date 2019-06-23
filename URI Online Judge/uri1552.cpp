/*input
2
5
0 0
0 100
100 200
200 400
300 300
4
1 5
1 4
2 3
3 2
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
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

vector<iii> G;
vector<ii> v;
int pai[100000], peso[100000];

int find(int x)
{
    return x == pai[x] ? x : pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);
    if(peso[x] > peso[y])
        pai[y] = x;
    else if(peso[x] < peso[y])
        pai[x] = y;
    else
        pai[x] = y, peso[y]++;
}

double dist(int a, int b, int _a, int _b)
{
    return hypot(a-_a, b-_b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int quant;
    cin >> quant;

    while(quant--)
    {
        int x, y, n;
        cin >> n;
        
        f(0, n)
        {
            cin >> x >> y;
            v.pb({x,y});
        }

        f(0, (int) v.size())
            fr(i+1,  (int) v.size())
                G.push_back({dist(v[i].fi, v[i].se, v[j].fi, v[j].se), {i, j}});

        sort(G.begin(), G.end());

        f(0, n+1)
            pai[i] = i, peso[i] = 0;

        double ans = 0;
        int u, z;
        double w;
        f(0, (int) G.size())
        {
            w = G[i].fi;
            u = G[i].se.fi;
            z = G[i].se.se;
            if(find(u) != find(z))
            {
                join(u, z);
                ans += w;
            }
        }
        cout << fixed << setprecision(2) << ans/100.0 << endl;
        G.clear();
        v.clear();
    }

    return 0;
}