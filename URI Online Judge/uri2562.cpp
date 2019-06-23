#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

void dfs(int u, vvi &graph, vi &visited, vi &component, vi &size, int c) 
{
    int i, tam;
    component[u] = c;
    size[c]++;
    visited[u] = 1;
    tam = graph[u].size();

    for(i = 0; i < tam; i++) 
    {
        int v = graph[u][i];

        if (!visited[v]) 
        {
            dfs(v, graph, visited, component, size, c);
        }
    }
}

int main()
{
    int i, n, m;

    while (cin >> n >> m) 
    {
        vvi graph(n);

        for(i = 0; i < m; i++) 
        {
            int u, v;
            cin >> u >> v;
            u--; 
            v--;

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vi visited(n, 0);
        vi component(n, -1);
        vi size(n, 0);
        int count = 0;

        for(i = 0; i < n; i++) 
        {
            if (!visited[i]) 
            {
                dfs(i, graph, visited, component, size, count++);
            }
        }

        int u;
        cin >> u;
        cout << size[component[--u]] << endl;
    }

    return 0;
}