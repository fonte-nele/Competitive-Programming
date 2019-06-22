/*input
3
5
1 3 1 3 2
5
1 2 3 2 1
7
1 1 2 3 3 4 2
*/

// URI 1775 - André e os Mentos
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

/*int V, E, low[MAX], pre[MAX], visitado[MAX], tam = 0;
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
}*/
int memo[1005][1005];

int dp(int i, int j, int mentos[]){
    if(i > j)
        return 0;
    else if(i == j)
        return 1;

    if(memo[i][j] != -1)
        return memo[i][j];

    int res = INT_MAX;

    if(mentos[i] == mentos[j])
        res = min(res, 1 + dp(i+1, j-1, mentos));
    else{
        res = min(res, 1 + dp(i+1, j, mentos));
        res = min(res, 1 + dp(i, j-1, mentos));
    }

    return memo[i][j] = res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;

    cin >> t;
    f(1, t+1){

        cin >> n;
        int mentos[n];
        fr(0, n)
        {
            cin >> mentos[j];
        }
        memset(memo, -1, sizeof(memo));

        cout << "Caso #" << i << ": " << dp(0, n-1, mentos) << endl;
    }
    return 0;
}