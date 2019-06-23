/*input
8
1 -1 -1 1 -1 1 1 -1
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

    int quant, cor, pos;
    cin >> quant;
    vector<int> v(quant);
    vector<int> cores(quant);

    f(0, quant)
    {
        cin >> v[i];
    }
    f(0, quant-1)
    {
        if(v[i] == v[i+1])
        {
            //cout << "111preta" << endl;
            cores[i] = 1;
        }
        else
        {
            //cout << "111branca" << endl;
            cores[i] = -1;
        }
    }
    //cout << endl;
    pos = quant-2;
    while(pos > 1)
    {
        for(int i = 0; i < pos; i++)
        {
            if(cores[i] == cores[i+1])
            {
                //cout << "222preta" << i << endl;
                cores[i] = 1;
            }
            else
            {
                //cout << "222branca" << i << endl;
                cores[i] = -1;
            }
        }
        //cout << endl;
        pos--;
    }


    if(cores[0] == cores[1])
        cout << "preta" << endl;
    else
        cout << "branca" << endl;

    return 0;
}