/*input
9
11
12
*/

// URI 1568 - {soma+=i++} até N
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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

typedef long long int lli;
typedef lli ll;

bitset<30000020LL> isprime;
lli prime[30000020LL];
lli lim = 3000000;

void primo(ll *p) {
    ll prime_cont = 0;
    prime[prime_cont] = 2;
    prime_cont++;

    isprime.set();
    for(ll i=3; i<=lim; i+=2) 
    {
        if(isprime[i]) 
        {
            prime[prime_cont++] = i;

            for(ll j = i * i; j <= lim; j+= i) 
                isprime.reset(j);
        }
    }

    *p = prime_cont;
}

int fatora(ll n, ll prime_cont)
{
    ll i = 0;
    int ans = 1;
    int div;
    
    while (n > 1 && i < prime_cont)
    {
        div = 0;
        while(n > 1 && n % prime[i] == 0)
        {
            n/= prime[i];
            div++;
        }
        i++;
        if (i > 1) ans*= (div + 1);
    }
    if(n > 1)
        ans *= 2;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll qtd = 0;
    primo(&qtd);

    while(cin >> n){
        if (n == 0) 
            cout << 1 << endl;
        else
            cout << fatora(n, qtd) << endl;
    }

    return 0;
}