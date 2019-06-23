/*input
3
0 6
2 4
0 0
*/

// URI 1890 - Emplacando os Tuk-tuks
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, c, d;
    unsigned long long int res;

    cin >> t;
    while(t--)
    {
        cin >> c >> d;
        //res = (pow(26,c))*(pow(10,d));
        res = 1;
        f(0, c){
            res *= 26;
        }
        f(0, d){
            res *= 10;
        }

        cout << (res==1 ? 0 : res) << endl;
    }

    return 0;
}