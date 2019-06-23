/*input
2 1
1 1
1 1
3 2
1 3
3 1
2 2
4 10
1 1
2 2
1 3
0 4
*/

// URI 1495 - Futebol
#include <bits/stdc++.h>
#include <string>
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
    int n, g, s, r;

    while(cin >> n >> g)
    {
        int pont = 0, emp = 0;

        list<int> lista;
        list<int> :: iterator it;
        f(0, n){
            cin >> s >> r;
            if(s > r){
                pont += 3;
            }else if(s == r){
                emp++;
                pont++;
            }else{
                lista.push_back(r-s);
            }
        }
        lista.sort();
        while(g != 0 && emp != 0){
            emp--;
            g--;
            pont += 2;
        }
        for(it = lista.begin(); it != lista.end(); ++it){
            if(g <= 0)
                break;
            if(g >= *it){
                if(g == *it){
                    pont++;
                    g = 0;
                    break;
                }
            }
            if(g > *it){
                pont += 3;
                g -= *it+1;
            }
        }
        cout << pont << endl;
    }

    return 0;
}