/*input
8 5 2
1 2
3 2
5 6
7 8
4 6
*/

// I - Emergência em Manaus
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

const int tam = 20005;
int n, m, s;

vector<int> grafo[tam], full[tam];
bool visitado[tam];
int grau[tam];

void dfs(int u, vector<int> g[]){
	if(visitado[u])
        return;
    visitado[u] = true;
    for(int v: g[u])
        dfs(v, g);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int u, v;
    cin >> n >> m >> s;
    s--;
    f(0, m){
    	cin >> u >> v;
        u--;
        v--;
        if(u == v)
            continue;
        grafo[u].push_back(v), grau[v]++;
        full[u].push_back(v), full[v].push_back(u);
    }

    dfs(s, grafo);
    int res = 0;
    f(0, n){
    	if(!visitado[i] && grau[i] == 0)
            res++, dfs(i, grafo);
    }
    f(0, n){
        if(!visitado[i])
            res++, dfs(i, full);
    }
    cout << res << endl;
    return 0;
}