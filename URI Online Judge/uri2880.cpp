/*input
FDMLCRDMRALF
ARMADA
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
#define INF 0x3f3f3f3f3f3f3f3fLL
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
    
    int j, cont = 0, pos;
    bool flag;
    string p1, p2;

    cin >> p1 >> p2;

    int tam1 = p1.size(); 
    int tam2 = p2.size(); 
    f(0, tam1)
    {
        pos = 0;
        flag = true;
        int val = (i+tam2);
        if((i + tam2) > tam1)
            break; 
        for(j = i; j < val; j++)
        {
            //if((j + tam2) > tam1)
            //    break;
            if(p1[j] == p2[pos])
                flag = false;

            pos++;
        }
        //cout << "i = " << i << " j = " << j << endl;
        if(flag)
            cont++;

    }
    cout << cont << endl;

    return 0;
}