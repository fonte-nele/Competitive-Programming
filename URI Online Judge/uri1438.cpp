/*input
4 3
1 3
2 1 2
1 4
4 3
1 3
2 2 1
1 4
0 0
*/

// URI 1438 - Desempilhando Caixas
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

    int n, p;

    while(cin >> n >> p && n && p)
    {
        vector<stack<int>> pilhas(p);
        int quant, valor, x, y;
        f(0, p){
            cin >> quant;

            fr(0, quant){
                cin >> valor;
                if(valor == 1){
                    x = i;
                    y = j;
                }
                pilhas[i].push(valor);
            }
        }
        /*f(0, p){
            while(!pilhas[i].empty())
            {
                cout << pilhas[i].top() << endl;
                pilhas[i].pop();
            }
            cout << "Outra " << endl;
        }*/

        int dir = 0, esq = 0;
        f(x+1, p){
            if(pilhas[i].size() > y){
                dir += pilhas[i].size() - y;
            }
            else
                break;
        }
        for (int i = x-1; i >= 0; i--)
        {
            if(pilhas[i].size() > y){
                esq += pilhas[i].size() - y;
            }
            else
                break;
        }

        cout << min(dir, esq) + pilhas[x].size() - y-1 << endl;
    }

    return 0;
}