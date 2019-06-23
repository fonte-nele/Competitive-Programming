/*input
6 10
100 120 130 80 50 40
*/

// URI 1932 - Bolsa de Valores
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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;

    while(cin >> n >> c)
    {
        int v[n], dp[n][2];

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        dp[0][0] = 0;
        dp[0][1] = -v[0]-c;

        for (int i = 1; i <= n; i++)
        {
            dp[i][1] = max(dp[i-1][1], dp[i-1][0]-v[i-1]-c);
            dp[i][0] = max(dp[i-1][1]+v[i-1], dp[i-1][0]);
        }
        cout << dp[n][0] << endl;
    }

    return 0;
}