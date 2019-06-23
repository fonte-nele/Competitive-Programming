/*input
3 7
rice rice
spaghetti spaghetti
octopus octopi
rice
lobster
spaghetti
strawberry
octopus
peach
turkey
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

bool vogal(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else 
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, n;
    st p1, p2;
    cin >> l >> n;

    vector<pair<string, string> > irr;
    f(0, l)
    {
        cin >> p1 >> p2;
        irr.push_back(make_pair(p1, p2));
    }

    f(0, n)
    {
        bool flag = false;
        cin >> p1;

        vector<pair<string, string> >:: iterator it;
        for(it = irr.begin(); it != irr.end(); it++)
        {
            if((*it).first == p1){
                cout << (*it).second << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            int tam = p1.size();
            if(p1[tam-1] == 'o' || p1[tam-1] == 's' || p1[tam-1] == 'x' || (p1[tam-2] == 'c' && p1[tam-1] == 'h') || (p1[tam-2] == 's' && p1[tam-1] == 'h'))
                cout << p1 << "es" << endl;
            else if(p1[tam-1] == 'y' && !vogal(p1[tam-2]))
            {
                //string aux = p1[tam-1];
                p1.replace(tam-1, 3,  "ies");
                cout << p1 << endl;
            }
            else
                cout << p1 << "s" << endl;
        }
    }

    return 0;
}