/*input
5
0
1
1
0
1
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin >> n;
    vector<int> v(n);
    vector<int> quant(n);
    quant.assign(n, 0);

    f(0, n)
        cin >> v[i];

    if(v[1] == 1)
        quant[0] = v[0] + v[1];
    else
        quant[0] = v[0];
    if(v[n-2] == 1)
        quant[n-1] = v[n-1] + v[n-2];
    else
        quant[n-1] = v[n-1];

    for(int i = 1; i < n-1; i++)
    {
        quant[i] = v[i-1] + v[i] + v[i+1];
    }

    f(0, n)
        cout << quant[i] << endl;
    
    return 0;
}