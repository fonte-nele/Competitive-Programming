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
    
    int n, l, c, cont, total, soma;
    
    while(cin >> n >> l >> c)
    {
        cont = 0;
        total = 0;
        soma = 0;
        vector<string> v(n);

        f(0, n)
            cin >> v[i]; 

        f(0, n){
            total += v[i].size();
            total += 1;
            if(total == c || total-1 == c){
                cont++;
                total = 0;
            }
            else if(total > c)
            {
                cont++;
                total = v[i].size() + 1;
            }
            if(cont == l){
                soma++;
                cont = 0;
            }
        }
        cout << (total > 0 || cont > 0? soma+1 : soma) << endl;
    }

    return 0;
}