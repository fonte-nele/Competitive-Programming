/*input
3
2 3 3
1
3
1 3 2
1
0
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
    int n, k, resp;

    while(cin >> n && n != 0)
    {
        vector<int> v(n+1);
        f(1, n+1)
        {
            cin >> v[i];
        } 
        cin >> k;

        while(true)
        {
            if(v[k] == k){
                resp = k;
                break;
            }
            else
                k = v[k];
        }
        cout << resp << endl;
    }

    return 0;
}