/*input
7
1 4 5 1 2 7 9
4
1 2
2 3
4 5
6 7
11
1 1
1 2
1 3
1 4
1 5
1 6
1 7
2 1 6
1 1
1 2 
1 3
*/

// J - Monitor
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

const int tam = 100005;
int n;
int grade[tam], parent[tam], grupo[tam];

int root(int u){
	if(parent[u] < 0)
        return (u);
    return(parent[u] = root(parent[u]));
}

void merge(int u, int v){
    u = root(u), v = root(v);
    if(u == v)
        return;
    if(parent[v] < parent[u])
        swap(u, v);
    parent[u] += parent[v];
    parent[v] = u;
}

int setSize(int u){
    return (-1 * parent[root(u)]);
}

vector<vector<int>> grupoGrade;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(parent, -1, sizeof(parent));
    cin >> n;
    
    f(0, n){
    	cin >> grade[i];
    }

    int m, u, v, q;
    cin >> m;
    f(0, m){
    	cin >> u >> v;
        u--, v--;
        merge(u, v);
    }
    f(0, n){
        if(parent[i] < 0){
            grupo[i] = grupoGrade.size();
            grupoGrade.push_back(vector<int> (101, 0));
        }
    }
    f(0, n)
        grupoGrade[grupo[root(i)]][grade[i]]++;
    
    cin >> q;
    while(q--){
        int op;
        cin >> op;
        if(op == 1){
            int w, res = 0;
            cin >> w;
            w--;
            for(int i = 1, id = grupo[root(w)]; i < grade[w]; i++)
                res += grupoGrade[id][i];
            cout << res << endl;
        }else{
            int w, k;
            cin >> w >> k;
            w--;
            grupoGrade[grupo[root(w)]][grade[w]]--;
            grupoGrade[grupo[root(w)]][k]++;
            grade[w] = k;
        }
    }

    return 0;
}