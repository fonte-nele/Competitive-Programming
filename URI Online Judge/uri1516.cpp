/*input
14 4 20
Se mana Piedade tem casado com Quincas Borba apenas me daria uma esperanca colateral
16 3 30
No dia seguinte entrou a dizer de mim nomes feios e acabou alcunhando me Dom Casmurro
5 2 2
a de i de o
5 2 2
a e i o u
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
    
    int m, n, mi, ni, i, j, k, l;
    while(cin >> m >> n && m != 0 && n != 0)
    {
        char mat[m][n];

        f(0, m){
            fr(0, n){
                cin >> mat[i][j];
            }
        }

        cin >> mi >> ni;

        mi /= m;
        ni /= n;

        for(i = 0; i < m; i++){
            for(k = 0; k < mi; k++){
                for(j = 0; j < n; j++){
                    for(l = 0; l < ni; l++){
                        cout << mat[i][j];
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }


    return 0;
}