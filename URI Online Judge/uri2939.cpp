/*input
3
*/

// D - Casais
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

int n;
ull dp[1000005];

ull potencia(){
    ull pot = 1;
    
    f(0, n){
        pot = ((pot * 2) % ((int)1e9 + 7));
    }
    return pot % ((int)1e9 + 7);
}

ull fatorial(){
    ull fat = 1;

    for(int i = 2; i <= n; i++)
    {
        fat = ((fat * i) % ((int)1e9 + 7));
    }
    return fat % ((int)1e9 + 7);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    //cout << potencia() << endl;
    //cout << fatorial() << endl;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    f(3, n+1){
        dp[i] = (dp[i-1] + dp[i-2]) % ((int)1e9 + 7);
    }

    /*f(0, n+1){
        cout << dp[i] << " ";
    }*/
    //cout << dp[n] << endl;
    ull mult = (potencia() * fatorial())  % ((int)1e9 + 7);
    cout << (mult * dp[n]) % ((int)1e9 + 7) << endl;  

    return 0;
}