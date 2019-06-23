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

    int cont = 0;
    st x, m;
    getline(cin, x);

    int tam = x.size();
    f(0, tam)
    {
        x[i] = tolower(x[i]);
    }
    //cout << x << endl;

    map<st, long int> v;
    f(0, tam-1)
    {
        m = x.substr(i, 2);
        v[m] ++;
        //cout << m << endl;
    }

    for(map<st, long int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        //cout << (*it).second << endl;
        if((*it).second > cont)
        {
            cont = (*it).second;
            m = (*it).first;
        }
        else if((*it).second == cont)
        {
            if((*it).first < m)
            {
                m = (*it).first;
            }
        }
    }

    cout << m << ':' << cont << endl;
 
    return 0;
}