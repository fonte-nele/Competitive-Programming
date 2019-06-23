/*input
3 3 1 1
1 2 3
1 3 3
1 10 1
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int linhas, colunas, m, n, soma, maior;
    cin >> linhas >> colunas >> m >> n;
    int mat[linhas][colunas];

    f(0, linhas)
    {
        fr(0, colunas)
        {
            cin >> mat[i][j];
        }
    }
    soma = 0;
    maior = 0;
    for(int i = 0; i < linhas; i+=m)
    {
        for(int j = 0; j < colunas; j+=n)
        {
            soma = 0;
            for(int k = i; k < (i+m); k++)
            {
                for(int l = j; l < (j+n); l++)
                {
                    soma += mat[k][l];
                    if(soma > maior)
                        maior = soma;
                }
            }
        }
    }
    cout << maior << endl;

    return 0;
}