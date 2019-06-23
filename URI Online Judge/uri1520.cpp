/*input
3
1 3
2 4
3 5
4
4
1 3
2 4
1 5
3 6
3
2
1 3
3 5
7
*/

// URI 1520 - Parafusos e Porcas
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, num, quant;

    while(cin >> n){
        multiset <int> v;
        multiset <int> :: iterator it;
        
        f(0, n){
            cin >> x >> y;
            for (int j = x; j <= y; ++j)
            {
                v.insert(j);
            }
        }
        // for (it = v.begin(); it != v.end(); ++it)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;
        cin >> num;
        quant = v.count(num);
        if(quant == 0){
            cout << num << " not found" << endl;
        }else{
            it = v.lower_bound(num);
            //cout << "Ite " << distance(v.begin(), it) << endl;
            cout << num << " found from " << distance(v.begin(), it) << " to " << distance(v.begin(), it) + quant - 1 << endl;
        }
    }

    return 0;
}