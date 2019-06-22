/*input
6 5 3
1 2
2 3
2 4
2 5
4 5
1 3
1 5
2 6
4 2 3
1 2
2 3
1 4
1 3
1 2
0 0 0
*/

// URI 1314 - Labirintos de Cerca Viva
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
#define MAX 10010
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int V, E, num[MAX], low[MAX], parents[MAX], visitado[MAX], tam = 0;
vector<pair <int, int > > pontos;

void dfs(int u, vector<int> v[], vector<int> s[]){
    //int children_count = 0;
    visitado[u] = 1;
    num[u] = low[u] = tam++;

    for(int i = 0; i < (int)v[u].size(); i++)
    {
        if(!visitado[v[u][i]]){
            parents[v[u][i]] = u;
            
            dfs(v[u][i], v, s);

            low[u] = min(low[u], low[v[u][i]]);

            if(low[v[u][i]] > num[u]){
                pontos.push_back(make_pair(v[u][i], num[u]));

                s[v[u][i]].push_back(u);
                s[u].push_back(v[u][i]);
            }
        }else if(v[u][i] != parents[u]){
            low[u] = min(low[u], num[v[u][i]]);
        }
    }
}

int bfs(int inicio, int final, vector<int> s[]){
    queue<int> q;

    q.push(inicio);
    int atual;

    while(!q.empty()){
        atual = q.front();
        q.pop();

        if(atual == final)
            return 1;

        visitado[atual] = 1;

        f(0, (int)s[atual].size()){
            if(!visitado[s[atual][i]]){
                q.push(s[atual][i]);
            }
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, v1, v2;

    while(cin >> V >> E >> c && V && E && c)
    {
        memset(visitado, 0, sizeof(visitado));
        memset(num, -1, sizeof(num));
        memset(low, -1, sizeof(low));
        memset(parents, -1, sizeof(parents));
        tam = 0;

        vector<int> v[MAX];
        vector<int> s[MAX];
        f(0, E)
        {
            cin >> v1 >> v2;
            v[v1].push_back(v2);
            v[v2].push_back(v1);
        }
        f(1, V+1){
            dfs(i, v, s);
        }

        /*cout << "Pontes no Grafo: " << endl;
        f(1, V+1){
            fr(0, (int)s[i].size())
            {
                cout << i << " = " << s[i][j] << endl;
            }
            cout << endl;
        }*/
        f(0, c)
        {
            memset(visitado, 0, sizeof(visitado));

            cin >> v1 >> v2;
            if(bfs(v1, v2, s)){
                cout << "Y" << endl;
            }else{
                cout << "N" << endl;
            }
        }
        cout << "-" << endl;
    }

    return 0;
}