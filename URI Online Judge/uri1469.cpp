/*input
7 8 9
21 33 33 18 42 22 26
1 2
1 3
2 5
3 5
3 6
4 6
4 7
6 7
P 7
T 4 2
P 7
P 5
T 1 4
P 7
T 4 7
P 2
P 6
*/

// URI 1469 - Chefe
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
#define MAX 505
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int age[MAX], visitado[MAX], pos[MAX];
vector<vector<int> > adj;
int x, y, res;

void dfs(int v){
    //int children_count = 0;
    visitado[v] = 1;

    if(v != pos[x])
        res = min(res, age[v]);

    for(auto filho : adj[v])
    {
        if(!visitado[filho]){
            dfs(filho);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p;
    char op;

    while(cin >> n >> m >> p){
        
        f(1, n+1){
            cin >> age[i];
            pos[i] = i;
        }

        adj.resize(n+1);
        adj.clear();
        f(0, m){
            cin >> x >> y;
            adj[y].push_back(x);
        }

        f(1, p+1){
            cin >> op >> x;
            if(op == 'T'){
                cin >> y;
                swap(age[pos[x]], age[pos[y]]);
                swap(pos[x], pos[y]);
                continue;
            }
            memset(visitado, 0, sizeof(visitado));
            res = INF;
            dfs(pos[x]);
            if(res == INF)
                cout << "*" << endl;
            else
                cout << res << endl;
        }

    }
    return 0;
}