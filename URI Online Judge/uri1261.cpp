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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, num, salario, cont = 0;
    while(cin >> quant >> num)
    {
        map <st, long long> v;
        st nome;

        f(0, quant)
        {
            cin >> nome >> salario;
            v[nome] = salario;
        }
        f(0, num)
        {
            cont = 0;
            while(cin >> nome && nome != ".")
            {
                if(v.find(nome) != v.end())
                    cont += v[nome];
            }
            cout << cont << endl;
        }
        v.clear();
    }


    return 0;
}