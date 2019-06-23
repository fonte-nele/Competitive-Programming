/*input
3
1 7
5 7
8 12
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

vi crivo(int n)
{
    vi prob(n + 1, 1);
    prob[0] = prob[1] = 0;
    for (ll p = 3; p * p <= n; p += 2) {
        if (prob[p]) {
            for (ll i = p * p; i <= n; i += p) {
                if (i < 0) printf("%lld %lld\n", p, i);
                prob[i] = 0;
            }
        }
    }
    // Adiciono todos os que ficaram na lista de primos.
    vi primes;
    primes.push_back(2);
    for (int i = 0; i < prob.size(); i++) {
        if (prob[i] and i % 2 != 0) primes.push_back(i);
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q, x, y;
    const int n = 1048576;

    vi primos = crivo(n);
    vi is_prime(max(n, primos.back() + 1), 0);
    vi is_twin(is_prime.size(), 0);
    vi acum(is_prime.size(), 0);
    
    for (auto p : primos) {
        is_prime[p] = 1;
    }
    for (int i = 0; i < (int)is_twin.size(); i++) {
        if (is_prime[i] and i+2 < (int)is_prime.size() and is_prime[i+2]) 
            is_twin[i] = is_twin[i+2] = 1;
    }
    for (int i = 1; i < (int)acum.size(); i++) {
        acum[i] = acum[i-1] + is_twin[i];
    }

    cin >> q;
    while(q--)
    {
        cin >> x >> y;
        if(y < x)
            swap(x, y);

        if(x == 0)
            cout << acum[y] << endl;
        else
            cout << acum[y] - acum[x-1] << endl;
    }
    return 0;
}