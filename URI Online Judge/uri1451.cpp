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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    st pal;

    while(cin >> pal) 
    {
        list<char> v;
        auto valor = v.begin();
        f(0, (int)pal.size())
        {
            if(pal[i] == '[')
            {
                valor = v.begin();
            }
            else if(pal[i] == ']')
            {
                valor = v.end();
            }
            else
                v.insert(valor, pal[i]);
        }
        for(list<char>::iterator it = v.begin(); it != v.end(); it++)
            cout << *it;
        cout << endl;

        v.clear();
    }
    return 0;
}