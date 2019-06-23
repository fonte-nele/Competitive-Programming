/*input
1
4x5 
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--)
    {
        int n1, n2;
        char x;
        cin >> n1 >> x >> n2;

        if(n1 != n2){
            for(int i = 5; i < 11; i++)
            {
                cout << n1 << " x " << i << " = " << n1 * i << " && " << n2 << " x " << i << " = " << n2 * i << endl;
            }
        }
        else
        {
            for(int i = 5; i < 11; i++)
            {
                cout << n1 << " x " << i << " = " << n1 * i << endl;
            }
        }
    }

    return 0;
}