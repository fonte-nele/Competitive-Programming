/*input
4 5
1 2 1
1 3 2
2 4 1
3 4 1
4 1 2
3 2 
1 2 2
1 3 2
3 2 
1 2 2
1 3 1
4 2
1 2 2
3 4 2
0 0
*/

// URI 1128 - Ir e Vir
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
#define MAX 10005
#define endl "\n"
#define NIL -1
typedef long long int ll;
typedef unsigned long long int ull;
//typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

vector<int>edges[MAX];
stack<int>st;
int n, m, tarjan_time=0, time_discovery[MAX], low[MAX], cont;
bool vis[MAX]; 

void dfs(int u){
    time_discovery[u] = low[u] = ++tarjan_time; //tempo de descoberta e low recebem o mesmo valor
    st.push(u); //coloca 'u' na pilha
    vis[u] = true; //marca como visitado
    for(auto v : edges[u]){ //vejo todos os adjacentes de 'u'  no grafo
        if(!time_discovery[v]){ //chamo a dfs se o vertice ainda nao foi visitado, ou seja, tempo de descoberta eh igual a 0
            dfs(v); 
            low[u] = min(low[u], low[v]); //pego o menor low entre 'u' e seu adjacente 'v' na volta da recursao
        }
        else if(vis[v]) low[u] = min(low[u], time_discovery[v]); //se o vertice ja foi visitado pego o menor low 
    }

    if(low[u] == time_discovery[u]){ //se low e o tempo de descoberta forem iguais quer dizer que achamos um grupo de componentes conexas
        int w = 0;
        while(st.top() != u){ //todos os vertices que estiverem em cima de 'u' na pilha(mesmo low) serao printados 
            w = st.top();
            //cout << w << ' ';
            vis[w] = !vis[w];
            st.pop();
        }
        w = st.top();
        //cout << w << endl;
        vis[w] = !vis[w];
        st.pop();
        cont++;
    }
}

void tarjan(){
    for(int i=0; i < n; i++){
        if(time_discovery[i] == 0) dfs(i);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> n >> m && n+m){

        f(0, MAX)
            edges[i].clear();

        while(m--)
        {
            int u, v, p; 
            cin >> u >> v >> p;
            u--; v--;
            if(p == 1)
                edges[u].pb(v);
            else{
                edges[u].pb(v);
                edges[v].pb(u);
            }
        }

        tarjan_time=0, cont=0;
        memset(time_discovery, 0, sizeof(time_discovery));
        memset(low, 0, sizeof(low));
        while(!st.empty()){
            st.pop();
        }
        //cout << "SCC = " << endl;
        tarjan();
        if(cont == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}