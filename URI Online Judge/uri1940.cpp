/*input
3 3
1 1 1 1 2 2 2 3 3
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
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, r, num, pos = 0, maior = -1;

    cin >> j >> r;
    vector<int> v(j);
    
    //mem(v, 0);

    f(0, (j*r))
    {
        cin >> num;
        v[i%j] += num;
    }
    f(0, j)
    {
        if(maior <= v[i])
        {
            pos = i+1;
            maior = v[i];
        }
        //cout << v[i] << endl;
    }
    cout << pos << endl;

    return 0;
}