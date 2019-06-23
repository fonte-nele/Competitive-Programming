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

    int quant, cont1 = 0, cont2 = 0, casa = 0, trabalho = 0;

    st prev, prev2, ant; 
    cin >> quant;

    f(0, quant)
    {
        cin >> prev >> prev2;
        if(i == 0)
        {
            if(prev == "chuva")
                cont1++, trabalho++;
            else if(prev2 == "chuva")
                cont2++, casa++;

            ant = prev2;
        }
        else
        {
            if(prev == "chuva")
            {
                if(ant == "chuva")
                    trabalho++, casa--;
                else if(ant == "sol")
                {
                    if(casa == 0)
                        cont1++, trabalho++;
                    else
                        casa--, trabalho++;
                }
            }
            if(prev2 == "chuva")
            {
                if(prev == "chuva")
                    casa++, trabalho--;
                else if(prev == "sol")
                {
                    if(trabalho == 0)
                        cont2++, casa++;
                    else
                        trabalho--, casa++;
                }
            }

            ant = prev2;
        }
    }

    //cout << casa << " " << trabalho << endl;
    cout << cont1 << " " << cont2 << endl;

    return 0;
}