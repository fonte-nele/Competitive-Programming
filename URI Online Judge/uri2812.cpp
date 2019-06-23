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

    int quant, num, valor, cont = 0;
    cin >> quant;

    f(0, quant)
    {
        cont = 0;
        cin >> num;
        vector <int> v;

        fr(0, num)
        {
            cin >> valor;
            if(valor % 2 != 0)
            {
                v.push_back(valor);
                cont++;
            }
        }
        sort(all(v));

        int j = 0;
        int pos = cont-1;
        if(cont == 1)
            cout << v[0] << endl;
        else
        {
            for(j = 0; j <= pos; j++)
            {
                if(j == 0)
                    cout << v[pos] << " " << v[j];
                else if(j != pos)
                    cout << " " << v[pos] << " " << v[j];
                else
                    cout << " " << v[pos];
                
                pos--;
            }
            cout << endl;
        } 
    }

    return 0;
}