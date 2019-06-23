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

    int quant;
    st s1, s2, s3;
    bool flag;

    cin >> quant;

    f(0, quant)
    {
        flag = true;

        cin >> s1 >> s2 >> s3;

        vector<char> v1, v2;
        fr(0, (int)s3.size())
        {
            if(s3[j] == '_')
            {
                v1.pb(s1[j]);
                v2.pb(s2[j]);
            }
        }

        if (v1[0] == v2[1] and v1[1] != v2[0])
            puts ("Y");
        else if (v1[0] != v2[1] and v1[1] == v2[0])
            puts ("Y");
        else if (v1[0] != v2[0] and v1[1] == v2[1])
            puts ("N");
        else if (v1[0] == v2[0] and v1[1] != v2[1])
            puts ("N");
        else if (v1[0] == v2[0] and v1[1] == v2[1])
            puts ("Y");
        else
            puts ("N");

        v1.clear();
        v2.clear();
    }

    return 0;
}