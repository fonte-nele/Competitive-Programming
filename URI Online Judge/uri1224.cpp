/*input
4
0 -3 5 10
4
0 -3 5 7
4
47 50 -3 7
*/

// URI 1224 - Cartões
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

long long int dp[10005][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(cin >> n)
    {
        int v[n];

        f(0, n){
            cin >> v[i];
        }

        for (int i = 0; i < n-1; ++i){
            dp[i][0] = max(v[i], v[i + 1]);
        }
        int turn = 0;
        int pastTurn = 1;
        for (int intervalo = 4; intervalo <= n; intervalo += 2) 
        {
            pastTurn = turn;
            turn = (!(turn & 1)); // Alternar 0 e 1.
            for (int i = 0, j = intervalo - 1; j < n; ++i, ++j) 
            {
                dp[i][turn] = max(v[i] + min(dp[i + 1][pastTurn], dp[i + 2][pastTurn]),
                                  v[j] + min(dp[i][pastTurn], dp[i + 1][pastTurn]));
            }
        }
        cout << dp[0][turn] << endl;
    }

    return 0;
}