/*input
10 15
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

const int N = 100000;
vector<ll> p;
int sz;
void primos()
{
    bitset<1000010> bs;
    bs.set();

    bs[0] = bs[1] = 0;
    sz = N + 1;
    for(ll i = 2; i <= sz; i++)
    {
        if(bs[i])
        {
            for(ll j = i * i; j <= sz; j += i)
                bs[j] = 0;
            p.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, n1 = 2, m1 = 2;
    bool ok = false, ok1 = false;

    cin >> n >> m;
    primos();
    f(0, 1000)
    {
        if(p[i] > n && !ok)
        {
            n1 = p[i-1];
            ok = true;
        }
        if(p[i] > m && !ok1)
        {
            m1 = p[i-1];
            ok1 = true;
        }
        if(ok && ok1)
            break;
    }
    cout << n1 * m1 << endl;

    return 0;
}