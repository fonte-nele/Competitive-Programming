/*input
1000000000000000 10000000000000000
2 12
9007199254740992 9007199254740992
*/

// URI 1492 - Contando Uns
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

ll dp[60][2][2][60];
int qtdUm;
string r;

ll calcular(int pos, int menor, int comeco, int sum){
    if (pos == qtdUm) 
        return sum;

    ll &ans = dp[pos][menor][comeco][sum];

    if (ans == -1){
        ans = 0;
        int limite = (menor ? 1 : r[pos] - '0');
        if (comeco){
            for (int i = 1; i <= limite; ++i)
                ans += calcular(pos + 1, menor, 0, sum + (1 == i));
            ans += calcular(pos + 1, 1, 1, 0);
        }
        else{
            for (int i = 0 ; i <= limite; ++i)
                ans += calcular(pos + 1, menor || (i < limite), 0, sum + (1 == i));
        }
    }
    return ans;
}

void quantidadeUm(ll a){
    r.clear();
    while(a){
        r.push_back((a&1) + '0');
        a >>= 1;
    }
    reverse(r.begin(), r.end());
}

ll resp(ll a, ll b){
    quantidadeUm(a-1); // Analisar quantidade de uns entre 0 e a-1;
    qtdUm = r.size();
    memset(dp, -1, sizeof(dp));

    ll ans1 = calcular(0, 0, 1, 0);

    quantidadeUm(b); // Analisar quantidade de uns entre 0 e b;
    qtdUm = r.size();
    memset(dp, -1, sizeof(dp));

    ll ans2 = calcular(0, 0, 1, 0);
    return ans2 - ans1;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;

    while(cin >> a >> b){
        cout << resp(a, b) << endl;
    }

    return 0;
}
