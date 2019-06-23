/*input
10 5
1 2 3 4 5 6 7 8 9 10

5 2
1 5 2 4 3

17 5
17 15 11 11 9 7 5 3 3 1 2 4 6 8 10 12 14
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
#define eps 1e+7
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

bool comp(const int& a, const int& b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    while(cin >> n >> k)
    {
        long long soma = 0;
        vector<int> v(n);

        f(0, n)
            cin >> v[i];

        sort(v.begin(), v.end(), comp);

        f(0, k)
            soma += v[i];

        cout << soma % (1000000007) << endl;
    }
    //cout << endl;
    return 0;
}