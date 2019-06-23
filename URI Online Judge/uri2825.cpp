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

int d[105][105];

int dist(string pal1, string pal2, int tam1, int tam2)
{
    for(int i=0; i<=tam1; i++)
    {
        d[i][0] = i;
    }

    for(int j=0; j<=tam2; j++)
    {
        d[0][j] = j;
    }

    int c;
    for(int i=1; i<=tam1; i++)
    {
        for(int j=1; j<=tam2; j++)
        {
            if(pal1[i-1] == pal2[j-1])
                c=0;
            else
                c=1;

            d[i][j] = min(min(d[i-1][j-1]+c, d[i][j-1]+1),d[i-1][j]+1);
        }
    }
    /*for(int i=1; i<=tam1; i++)
    {
        for(int j=1; j<=tam2; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }*/
    return d[tam1][tam2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant;
    cin >> quant;

    vector<st> edda(quant);
    st x;
    f(0, quant)
    {
        cin >> x;
        edda[i] = x;
    }
    st pal, res;
    int n, custo, menor = INT_MAX, cont = 0;

    cin >> n;
    while(n--)
    {
        cin >> pal;
        menor = INT_MAX;
        f(0, quant)
        {
            custo = dist(pal, edda[i], int(pal.size()), int(edda[i].size()));
            //cout << custo << " " << pal << " " << edda[i] << endl;

            if(custo < menor)
            {
                menor = custo;
                res = edda[i];
            }
        }
        if(cont == 0)
            cout << res;
        else
            cout << " " << res;

        cont++;

        //caminho(pal1, pal2, int(pal1.size()), int(pal2.size()));
    }
    cout << endl;


    return 0;
}