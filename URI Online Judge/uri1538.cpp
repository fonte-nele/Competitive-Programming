/*input
1
2
3
4
5
6
7
8
0
*/

// URI 1538 - Sequência Alienígena
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
    long long n, res;
    st seq = "ABCD", saida;

    while(cin >> n && n)
    {
        saida = "";
        
        res = n * n;
        do{

            saida.insert(saida.begin(), seq[res%4]);
            res /= 4;

        }while(res != 0);

        cout << saida << endl;
    }

    return 0;
}