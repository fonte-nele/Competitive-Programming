/*input
9
9 8 8 6 8 2 6 -1 5
1 7 5 6 2 9 4 3 8
*/

// B - Podando Galhos
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
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

vector<int> visited;
vector<int> res;
//vector<vector<int>> adj;
vector<int> grafo[200005];

void dfs(int v, int u, int cont){
    visited[v] = 1;
    if(res[v] == 0)
        res[v] = cont;

    for(auto i : grafo[v])
    {
        if(i != u){
            if(!visited[i]){
                dfs(i, u, cont);
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, valor;
    cin >> n;

    /*vector<vector<int>> v;
    v.resize(n+1);*/

    res.resize(n+1, 0);
    visited.resize(n+1, 0);
    /*adj.resize(n+1);
    f(0, n+1){
        adj[i].resize(n+1);
    }*/

    //memset(adj, 0, sizeof(adj));
    //memset(visited, 0, sizeof(visited));

    f(0, n){
    	cin >> valor;
        if(valor != -1){
            //v[valor].push_back(i+1);
            //adj[valor].push_back(i+1);
            grafo[valor].push_back(i+1);
            //adj[valor][i+1] = 1;
        }
    }

    f(1, n+1){
        cin >> valor;
        
        if(!visited[valor]){
            dfs(valor, valor, i);
        }
    }

    f(1, n+1){
        if(i == 1)
            cout << res[i];
        else
            cout << " " << res[i];
    }
    cout << endl;
    /*f(1, n+1){
        cout << visited[i] << " ";
    }
    cout << endl;*/

    return 0;
}