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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;
#define MAX 2000020

int bit[2][MAX + 20];
int n;

void update(int id, int pos, int val)
{
    for(; pos < MAX; pos += pos & -pos)
    {
        bit[id][pos] += val;
    }
}

int get(int id, int pos)
{
    int sum = 0;
    for(; pos; pos -= pos & -pos)
        sum += bit[id][pos];

    return sum;
}

int get(int id, int l, int r)
{
    return get(id, r) - (l <= 1 ? 0 : get(id, l-1));
}

int getID(string s)
{
    return stoi(s.substr(1))-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int e;

    while(cin >> n >> e, (n || e))
    {
        mem(bit, 0);
        int jog[2][n/2];
        f(0, 2)
        {
            fr(0, n/2)
            {
                cin >> jog[i][j];
                jog[i][j]++;
                update(i, jog[i][j], 1);
            }
        }
        char c;
        bool imp;
        st xi;
        int golsA = 0, golsB = 0;
        while(e--)
        {
            cin >> c;

            if(c == 'I' || c == 'P')
            {
                cin >> xi;
                if(imp)
                    continue;
                if(c == 'I')
                    imp = false;
                int pos, total;
                if(xi[0] == 'A')
                {
                    pos = jog[0][getID(xi)];
                    total = get(1, pos+ 1, MAX);
                }
                else if(xi[0] == 'B')
                {
                    pos = jog[1][getID(xi)];
                    total = get(0, 1, pos-1);
                }

                if(total < n/11.0) // n/2 * 2/ 11.0
                    imp = true;
            }
            else if(c == 'M')
            {
                int pos;
                cin >> xi >> pos;
                pos++;
                int id = getID(xi);

                if(xi[0] == 'A')
                {
                    update(0, jog[0][id], -1);
                    jog[0][id] = pos;
                    update(0, jog[0][id], 1);
                }
                else
                {
                    update(1, jog[0][id], -1);
                    jog[1][id] = pos;
                    update(1, jog[0][id], 1);
                }
            }
            else if(c == 'S')
            {
                imp = false;
            }
            else
            {
                cin >> xi;
                if(!imp)
                {
                    if(xi[0] == 'A')
                        golsB++;
                    else
                        golsA++;
                }
                imp = false;
            }

        }

        cout << golsA << " X " << golsB << endl;
    }
    

    return 0;
}