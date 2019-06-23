/*input
200.00 
0.06 
6
3520.50 
0.13 
8
10000.00 
1.00 
9
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
    double empres, juros, dif, simples, composto;
    int meses;

    while(cin >> empres >> juros >> meses)
    {
        simples = empres*juros*meses;
        composto = empres*(pow(1+juros, meses)) - empres;
        dif = abs(composto - simples);


        cout << "DIFERENCA DE VALOR = " << fixed << setprecision(2) << dif << endl;
        cout << "JUROS SIMPLES = " << fixed << setprecision(2) << simples << endl;
        cout << "JUROS COMPOSTO = " << fixed << setprecision(2) << composto << endl;
    }

    return 0;
}