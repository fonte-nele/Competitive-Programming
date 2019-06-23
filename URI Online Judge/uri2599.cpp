/*input
1
4 2
3 2
*/

// URI 2599 - Contando radares
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

int n, m, dp[100005], v[100005];

long pd(int pos){
    if(pos >= n)
        return 1;
    if(dp[pos] != -1)
        return dp[pos];
    long res = 0;
    f(0, m){
        res = (res + pd(pos + v[i])) % 1000000007; // Mod valor enorme!
    }
    return dp[pos] = res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;

    cin >> c;

    while(c--)
    {
        cin >> n >> m;
        // Variação Problema Moeda!!
        memset(dp, -1, sizeof dp);
        f(0, m){
            cin >> v[i];
        }
        cout << pd(0) << endl;
    }

    return 0;
}