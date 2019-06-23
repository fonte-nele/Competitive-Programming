#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fst first
#define snd second

typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <int> vi;
typedef pair <int, int> ii;
typedef pair <int, ii> iii;
typedef pair <int, iii> iiii;
typedef pair <int, string> is;

int n, m, ans, v[50000];
vector <ii> adj[50000];
vi see;

int dfs (int u)
{
    see[u] = 1;
    int total = 0;
    for (int i = 0; i < sz (adj[u]); i++)
    {
        ii v = adj[u][i];
        if (see[v.first] == 0)
        {
            int temp = dfs (v.first);
            total += temp;
            temp = 2 * v.second * ceil (temp / (double) m);
            ans += temp;
        }
    }
    return v[u] + total;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n >> m)
    {
        f(1, n+1)
            cin >> v[i];
        f(0, n - 1)
        {
            int x, y, w;
            cin >> x >> y >> w;
            adj[x].pb (make_pair (y, w));
            adj[y].pb (make_pair (x, w));
        }
        ans = 0;
        see.assign (n + 1, 0);
        dfs (1);
        cout << ans << endl;
        f(1, n+1)
            adj[i].clear ();
    }
    return 0;
}