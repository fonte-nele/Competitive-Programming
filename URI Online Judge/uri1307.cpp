/*input
5
11011
11000
11011
11001
111111
100
1000000000
110
1010
100
*/

// URI 1307 - Tudo o que Você Precisa é Amor
#include <bits/stdc++.h>
#include <string>
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
    int n, cont = 1;
    st s1, s2;

    cin >> n;
    while(n--)
    {
        cin >> s1 >> s2;

        long long a = stoll(s1, 0, 2);
        long long b = stoll(s2, 0, 2);
        long long res = __gcd(a,b);

        cout << "Pair #" << cont << ": " << (res == 1 ? "Love is not all you need!" : "All you need is love!") << endl;

        cont++;
    }

    return 0;
}