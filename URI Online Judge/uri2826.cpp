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
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    st pal1, pal2;

    cin >> pal1 >> pal2;

    if(pal1 < pal2)
    {
        cout << pal1 << endl;
        cout << pal2 << endl;
    }
    else
    {
        cout << pal2 << endl;
        cout << pal1 << endl;
    }

    /*while(cin >> pal)
    {
        vector<char> v((int)pal.size());
        
        f(0, (int)pal.size())
        {
            v[i] = pal[i];
        }
        sort(all(v));

        f(0, (int)v.size())
        {
            cout << v[i];
        }
        cout << endl;
    }*/

    return 0;
}
