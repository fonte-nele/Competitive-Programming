#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int adj[1200][1200];

/*void dump(int n) 
{
    int i, j;
    for (i = 1; i <= n; ++i) 
    {
        for (j = 1; j <= n; ++ j) 
        {
            cout << adj[i][j];
        }
        cout << endl;
    }
}*/

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, i, j, k, u, v, w, d, res, soma = 0;
    char c;

    cin >> m >> n;
    
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            adj[i][j] = 0;
    for (k = 0; k < m; k++) 
    {
        cin >> i >> v >> j;
        adj[i][j] += v;
        soma += v;
    }
    /* dump(n); */
    for (v = 1; v <= n ; v++) 
    {
        u = w = 1;
        while ((u <= n) && (w <= n)) 
        {
            if (adj[u][v] == 0) 
            {
                ++u;
                continue;
            }
            if (adj[v][w] == 0) 
            {
                ++w;
                continue;
            }
            d = min(adj[u][v], adj[v][w]);
            if (u != w) adj[u][w] += d;
            adj[u][v] -= d;
            adj[v][w] -= d;
            /* dump(n); */
        }
    }
    res = 0;
    for (v = 1; v <= n; v++)
        for (w = 1; w <= n; w++)
            res += adj[v][w];
    if (res < soma) 
        c = 'S';
    else 
        c = 'N';
    cout << c << endl << res << endl;
    return 0;
}