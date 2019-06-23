/*input
10
4 2 2 2 5 6 7 8 1 1
1 4 4 4 1 1 1 1 2 3
5
3 3 3 3 2
8 9 9 9 9
10
8 4 7 1 1 9 5 2 4 3
5 6 9 7 9 4 2 3 7 4
0
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
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
    int quant;

    while(cin >> quant && quant != 0)
    {
        bool flag = true;
        int pontosM = 0, antM = -1, contM = 1;
        int pontosL = 0, antL = -1, contL = 1;

        vector<int> mark(quant);
        vector<int> let(quant);

        f(0, quant)
        {
            cin >> mark[i];
        }
        f(0, quant)
        {
            cin >> let[i];
        }
        f(0, quant)
        {
            if(flag)
            {
                if(antM != mark[i])
                {
                    antM = mark[i];
                    contM = 1;
                }
                else
                    contM++;
                if(antL != let[i])
                {
                    antL = let[i];
                    contL = 1;
                }
                else
                    contL++;

                if(contM == 3 || contL == 3)
                {
                    if(contM == 3 && contL == 3)
                    {
                        flag = false;
                    }
                    else if(contM == 3)
                        pontosM += 30;
                    else if(contL == 3)
                        pontosL += 30;

                    flag = false;
                }
            }
            pontosM += mark[i];
            pontosL += let[i];
        }
        //cout << pontosL << " = " << pontosM << endl;
        if(pontosL < pontosM)
            cout << 'M' << endl;
        else if(pontosL > pontosM)
            cout << 'L' << endl;
        else
            cout << 'T' << endl;
    }
    return 0;
}