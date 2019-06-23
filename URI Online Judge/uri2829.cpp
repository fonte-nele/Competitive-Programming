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


bool comp(const st& P1, const st& P2)
{
    int i = 0, tam1 = P1.size(), tam2 = P2.size();

    while (tolower(P1[i]) == tolower(P2[i]))
    {
        if(i == tam1 || i == tam2)
            break;
        i++;
    }
    //cout << i << " " << P1 << " " << P2 << endl;
    if(tam1 == tam2)
    {
        if(i == tam1)
            return P1 < P2;
    }
    
    return (tolower(P1[i]) < tolower(P2[i]));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant;
    st x;
    cin >> quant;
    vector<st> v(quant);

    f(0, quant)
    {
        cin >> x;
        v[i] = x;
    }
    sort(all(v), comp);

    f(0, quant)
    {
        cout << v[i] << endl;
    }
 
    return 0;
}
