/*input
2
12 9
0 1
1 5
5 6
0 4
4 2
2 3
7 8
1 7
10 11
11 8
0 1
1 2
3 4
4 3
5 6
6 8
7 9
9 10
*/

// URI 1081 - DFSr - Hierarquia de Profundidade
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
#define pi 3.1415926535897
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int V, E, adj[21][21], visited[21], flag = 0;

void dfs(int v, int cont){
    int w;
    visited[v] = 1;
    cont+=2;

    for(w = 0; w < V; w++)
    {
        if(adj[v][w] == 1){
            flag = 1;
            for(int j = 0; j < cont; j++) printf(" ");
            
            printf("%d-%d", v, w);

            if(!visited[w]){
                printf(" pathR(G,%d)\n", w);
                dfs(w, cont);
            }
            else{
                printf("\n");
            }

        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, v1, v2;

    cin >> n;
    for(int i=1; i <= n; i++)
    {
        cin >> V >> E;
        memset(adj, 0, sizeof(adj));
        memset(visited, 0, sizeof(visited));
        flag = 0;
        for (int j = 0; j < E; j++)
        {
            cin >> v1 >> v2;
            adj[v1][v2] = 1;
        }

        printf("Caso %d:\n", i);
        for (int j = 0; j < V; j++)
        {
            if(!visited[j]){
                dfs(j, 0);
            }
            if(flag == 1){
                printf("\n");
                flag = 0;
            }
        }

        /*cout << "LBL: " << endl;
        for (int j = 0; j < V; ++j)
        {
            cout << lbl[j] << endl;
        }*/
    }

    return 0;
}