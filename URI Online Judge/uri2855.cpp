/*input
6 3
2 1 3
3 1 2 3
2 1 3
2 1 2
2 2 3
1 2
3 1 2 3
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
    
    int quant, passo = 2, num, pos;
    bool flag = true;
    while(cin >> quant)
    {
        passo = 2;
        flag = true;
        vector <int> v(quant+1);

        f(1, quant+1)
            cin >> v[i];
        cin >> num;

        for(int i = 1; i < (int)v.size(); i++)
        {
            if(v[i] == num) 
                pos = i;
        }
        //cout << pos << " pos " << endl;

        while(passo <= pos)
        {
            if(pos % passo == 0)
            {
                flag = false;
                break;
            }
            //cout << pos << " passo = " << passo << endl;
            pos = pos - (pos / passo);
            passo++;
        }
        if(flag)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}