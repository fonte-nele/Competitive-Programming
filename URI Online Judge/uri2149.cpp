/*input
1
4
10
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
    vector<unsigned long long int> v(17);
    v[0] = 0;
    v[1] = 1;
    f(2, 17)
    {
        if(i % 2 == 0)
            v[i] = v[i-1] + v[i-2];
        else
            v[i] = v[i-1] * v[i-2];
    }
    // f(0, 17)
    //     cout << v[i] << endl;

    while(cin >> n) 
    {
        cout << v[n-1] << endl;
    }
    return 0;
}