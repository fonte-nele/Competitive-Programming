/*input
9
1101011
1100101
1100101
1110000
100000
1100011
1100001
1101100
1101101
1
1100101
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
    string a;

    while(cin >> n)
    { 
        f(0, n)
        {
            int num = 0;
            cin >> a;
            reverse(a.begin(), a.end());
            //cout << a << endl;
            fr(0, (int)a.size())
            {
                if(a[j] == '1'){
                    //cout << j << " ";
                    num += pow(2, j);
                }
            }
            char aux = num;
            //cout << num << endl;
            cout << aux;
        }
        cout << endl;
    }

    return 0;
}