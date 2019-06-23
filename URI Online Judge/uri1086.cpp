/*input
4 5
100
10
1 2 2 2 2 3 3 4 4 5
5 4
100
7
4 5 4 4 4 4 3
4 5
99
4
4 4 4 4
3 2
100
7
2 4 1 4 2 4 4
0 0
*/

// URI 1086 - O Salão do Clube
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
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

int v[10005], v_[10005];
set<int> val;
set<int> ::reverse_iterator it;

int check(int k, int sum, bool b) 
{

    it = val.rbegin();
    int d, n, cnt = 0;

    while(k && it != val.rend()) {
        n = *it;
        d = sum-n;
      
        if(b) {
            if(v[n] <= 0 || d < 0 || (d==n ? (v[d]-1) <= 0 : v[d] <= 0)) {
                it++; continue;
            }
        }
        if(!b) {
            if(v_[n] <= 0 || d < 0 || (d==n ?  (v_[d]-1) <= 0 : v_[d] <= 0)) {
                it++; continue;
            }
        }

        if(b) {
            v[d]--, v[n]--;
        }else {
            v_[d]--, v_[n]--;
        }

        cnt+= (d ? 2 : 1);
        k--;
    }

    if(k) 
        return INF;
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, l, k, w;

    while(cin >> n >> m && (n || m)){
        memset(v, 0, sizeof v);
        memset(v_, 0, sizeof v_);
        v[0] = v_[0] = INF;
        val.clear();
        
        cin >> l >> k;

        for (int i = 0; i < k; i++)
        {
            cin >> w;
            val.insert(w);
            v[w]++, v_[w]++;
        }
        int r = INF;

        if((n*100)%l == 0){
            r = min(r, check((n*100)/l,m,1));
        }
        if((m*100)%l == 0){
            r = min(r, check((m*100)/l,n,0));
        }
        if(r >= INF || r < 0)
            cout << "impossivel" << endl;
        else
            cout << r << endl;
    }

    return 0;
}