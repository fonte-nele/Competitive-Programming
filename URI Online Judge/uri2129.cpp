/*input
5
*/
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
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;
const int N = 1e6+5;

vector<ll> ans(N);

long long solve (ll n) 
{
    if (ans[n] >= 0) return ans[n];
    if (n == 0) return ans[0] = 1;
    if (n == 1) return ans[1] = 1;
    if (n == 2) return ans[2] = 2;
    if (n == 3) return ans[3] = 6;
    if (n == 4) return ans[4] = 4;
    if (n == 5) return ans[5] = 2;
    if (n == 6) return ans[6] = 2;
    if (n == 7) return ans[7] = 4;
    if (n == 8) return ans[8] = 2;
    if (n == 9) return ans[9] = 8;
    ll x = n; x /= 10; x %= 10;
    if (x&1) return ans[n] = (4*solve(n/5)*solve(n%10))%10;
    return ans[n] = (6*solve(n/5)*solve(n%10))%10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long num, res;
    int cont = 1;    
    ans.assign(N, -1);

    while(cin >> num)
    {
        if(num == 1)
            res = 1;
        else{
            res = solve(num); 
        }

        cout << "Instancia " << cont << endl;
        cout << res << endl << endl;
        cont++;
    }

    return 0;
}