/*input
3 3
1 2 2
2 3 2
3 1 2
3 3
1 2 1
2 3 1
3 1 1
2 1
1 2 2
5 6
3 4 1
1 3 2
2 4 2
3 5 2
2 1 1
4 1 1
*/

// URI 1442 - Desvio de Rua
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
#define MAX 1010
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int V, E, low[MAX], pre[MAX], visitado[MAX], tam = 0;
vector<vector<int> > g1, g2, final;
map<pair<int, int>, int> pontes, colinha;
stack<int> pilha;

void dfs(int v, int vis){
    //int children_count = 0;
    visitado[v] = 1;
    low[v] = pre[v] = tam++;

    for(auto filho : g2[v])
    {

        if(filho == vis)
            continue;

        if(!visitado[filho]){
            
            dfs(filho, v);

            if(low[filho] > pre[v]){

                pontes[{v, filho}] = 1;
                pontes[{filho, v}] = 1;
            }
            low[v] = min(low[v], low[filho]);

        }else {
            low[v] = min(low[v], pre[filho]);
        }
    }
}

void dfs2(int v){
    visitado[v] = 1;
    low[v] = pre[v] = tam++;
    pilha.push(v);

    for(auto filho : g1[v]){

        if(!visitado[filho])
            dfs2(filho);
        low[v] = min(low[v], low[filho]);
    }

    if(low[v] != pre[v])
        return;

    int node;
    vector<int> tmp;
    do{
        node = pilha.top();
        pilha.pop();
        low[node] = INF;
        tmp.push_back(node);

    }while(!pilha.empty() && node != v);
    final.push_back(tmp);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;

    while(cin >> V >> E)
    {
        memset(visitado, 0, sizeof(visitado));
        memset(pre, 0, sizeof(pre));
        memset(low, 0, sizeof(low));

        g1.clear();
        g2.clear();
        final.clear();
        g1.resize(V+1);
        g2.resize(V+1);
        pontes.clear();
        colinha.clear();
        f(0, E)
        {
            cin >> x >> y >> z;

            if(i==0)    // Não adicionar a primeira aresta.
                continue;
            g2[x].push_back(y); // Grafo Não direcionado!
            g2[y].push_back(x);

            g1[x].push_back(y); // Grafo Direcionado!
            if(z == 2)
                g1[y].push_back(x);

            colinha[{x, y}] = z;
            colinha[{y, x}] = z;
        }

        int cont = 0;
        f(1, V+1){
            if(!visitado[i]){
                dfs(i, i);
                cont++;
            }
        }
        if(cont > 1){
            cout << "*" << endl; // Grafo Bidirecionado tem ponte!
            continue;
        }

        memset(visitado, 0, sizeof(visitado));
        memset(pre, 0, sizeof(pre));
        memset(low, 0, sizeof(low));
        f(1, V+1)
        {
            if(!visitado[i]){
                dfs2(i);
            }
        }
        if(final.size() == 1){
            cout << "-" << endl; // Não precisa fazer nada, grafo fortemente conexo!
            continue;
        }
        int flag = 0;

        for(auto x : pontes){ // Procurando pontes de mao unica
            if(colinha[x.first] == 1)
                flag = 1;
        }
        cout << (flag == 1 ? "2" : "1") << endl;
    }

    return 0;
}