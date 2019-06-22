/*input
3
1
30 60
900 1800
2
710 30
710 2100
710 1000
3
710 30
710 2100
510 1000
910 1000
*/

// URI 1554 - Bilhar N+1
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
#define MAX 1010
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
    int c, n, x, y;

    cin >> c;
    while(c--){

        cin >> n;

        cin >> x >> y;
        int posX[n], posY[n];
        f(0, n)
        {
            cin >> posX[i] >> posY[i];
        }
        int pos;
        double dist = DBL_MAX, aux;

        f(0, n){
            aux = sqrt(pow((posX[i] - x), 2) + pow((posY[i] - y), 2));

            if(aux < dist){
                dist = aux;
                pos = i+1;
            }
        }

        cout << pos << endl;
    }
    return 0;
}
