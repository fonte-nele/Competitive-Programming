/*input
2
2 0.166666 1
2 0.166666 2
*/

// URI 1289 - Qual é a probabilidade!
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

double exp(double p, int k){
    double r = 1;
    f(0, k)
        r *= p;
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n, i;
    double p, probn, probi, r;

    cin >> s;
    while(s--)
    {
        cin >> n >> p >> i;

        probn = exp(1 - p, n);
        probi = exp(1 - p, i - 1);
        r = probi;

        for (int j = 0; j < 10000; j++)
        {
            probi *= probn;
            r += probi;
        }
        cout << fixed << setprecision(4) << r * p << endl;
    }

    return 0;
}