/*input
4
0 50 30 40
0 0 60 70
1 0 0 20
1 0 1 0
*/

// F - Fibra Ótica
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

const int tam = 5000;
int n;

int grafo[tam][tam];
bool visitado[tam], escolha[tam][tam];

void prim(){
	priority_queue<pair<int, pair<int, int>>> pq;
	pq.push({0, {0, -1}});
	
	while(!pq.empty()){

		int u = pq.top().second.first, prv = pq.top().second.second, c = pq.top().first; pq.pop();
		if (visitado[u]) 
			continue;
    	visitado[u] = true;

    	if (prv != -1) 
    		escolha[max(u, prv)][min(u, prv)] = true;

    	for (int v = 0; v < n; v ++){
     		if (v != u)
        		pq.push({-(grafo[min(u, v)][max(u, v)] * (grafo[max(u, v)][min(u, v)] ? -1 : 1)), {v, u}});
    	}
  	}
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    f(0, n){
    	fr(0, n){
    		cin >> grafo[i][j];
    	}
    }

    prim();
    int res = 0;
    f(0, n){
    	fr(0, i){
    		if((grafo[i][j] && !escolha[i][j]) || (escolha[i][j] && !grafo[i][j])){
    			res += grafo[j][i];
    		}
    	}
    }
    cout << res << endl;
    return 0;
}