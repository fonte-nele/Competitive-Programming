/*input
3
101 bin
101 dec
8f hex
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


int coinChange(vector<int>& coins, int tam, int m)
{ 
    // tabela[i] irá guardando o numero minimo de moedas requirida pelo valor i. 
    // Então tabela[m] irá ser o resultado 
    int tabela[m+1]; 
  
    // Caso base (Se determinado valor tam é 0) 
    tabela[0] = 0; 
  
    // Inicializar todos os valores da tabela com inifinito 
    for (int i=1; i<=m; i++) 
        tabela[i] = INT_MAX; 
  
    // Calcular o numero minimo de moedas requerido de valores de 1 até tam
    for (int i=1; i<=m; i++) 
    { 
        // Passar por todas as moedas menores que i
        for (int j=0; j<tam; j++) 
        {
            if (coins[j] <= i) 
            { 
                int sub_res = tabela[i-coins[j]]; 
                if (sub_res != INT_MAX && sub_res + 1 < tabela[i]) 
                    tabela[i] = sub_res + 1; 
            } 
        }
    } 
    return tabela[m]; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, quant, m;
    
    cin >> n;
    while(n--) 
    {
        cin >> quant >> m;

        std::vector<int> v(quant);

        f(0, quant){
            cin >> v[i];
        }
        cout << coinChange(v, quant, m) << endl;

    }
    return 0;
}