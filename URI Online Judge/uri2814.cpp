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

    int quant, intensidade, lin, fx, fy, jx, jy;
    double dist, deci;

    cin >> quant;

    while(quant--)
    {
        cin >> intensidade >> lin;

        char m[lin][30];
        string carac[lin];

        f(0, lin)
        {
            cin >> carac[i];
            //cout << carac[i];
        }
        int tam = (int)carac[0].size();
        f(0, lin)
        {
            fr(0, tam)
            {
                m[i][j] = carac[i][j];
                if(m[i][j] == 'F')
                {
                    fx = i+1;
                    fy = j+1;
                }
                if(m[i][j] == 'J')
                {
                    jx = i+1;
                    jy = j+1;
                }
            }
        }
        //fx *= 10, fy *= 10;
        //jx *= 10, jy *= 10;
        dist = sqrt(pow((jx - fx),2) + pow((jy - fy),2));
        dist *= 10;

        deci = (double)intensidade/ pow(0.99, (int)dist);
        cout << (int)deci << " dBs" << endl;
    }

    return 0;
}