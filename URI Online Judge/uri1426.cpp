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

    int i, j, quant, m[9][9];
    cin >> quant;

    while(quant--)
    {
        mem(m, 0);
        int pos1 = 4, pos2 = 0; 
        for(i = 0; i < 9; i+=2)
        {
            for(j = pos1; j <= (pos1+pos2); j+=2)
            {
                cin >> m[i][j];
            }
            //cout << pos1 << " " << pos2 << endl;
            pos2 += 2;
            pos1 --;
        }
        m[8][1] = (m[6][1] - (m[8][0] + m[8][2])) / 2;
        m[8][3] = (m[6][3] - (m[8][2] + m[8][4])) / 2;
        m[8][5] = (m[6][5] - (m[8][4] + m[8][6])) / 2;
        m[8][7] = (m[6][7] - (m[8][6] + m[8][8])) / 2;
        
        m[7][0] = m[8][0] + m[8][1];
        m[7][1] = m[8][1] + m[8][2];
        m[7][2] = m[8][2] + m[8][3];
        m[7][3] = m[8][3] + m[8][4];
        m[7][4] = m[8][4] + m[8][5];
        m[7][5] = m[8][5] + m[8][6];
        m[7][6] = m[8][6] + m[8][7];
        m[7][7] = m[8][7] + m[8][8];

        m[6][2] = m[7][1] + m[7][2];
        m[6][4] = m[7][3] + m[7][4];
        m[6][6] = m[7][5] + m[7][6];

        m[5][1] = m[6][1] + m[6][2];
        m[5][2] = m[6][2] + m[6][3];
        m[5][3] = m[6][3] + m[6][4];
        m[5][4] = m[6][4] + m[6][5];
        m[5][5] = m[6][5] + m[6][6];
        m[5][6] = m[6][6] + m[6][7];
        

        m[4][3] = m[5][2] + m[5][3];
        m[4][5] = m[5][4] + m[5][5];

        m[3][2] = m[4][2] + m[4][3];
        m[3][3] = m[4][3] + m[4][4];
        m[3][4] = m[4][4] + m[4][5];
        m[3][5] = m[4][5] + m[4][6];

        m[2][4] = m[3][3] + m[3][4];

        m[1][3] = m[2][3] + m[2][4];
        m[1][4] = m[2][4] + m[2][5];
        
        pos1 = 4, pos2 = 0;
        for(i = 0; i < 9; i++)
        {
            for(j = pos1; j <= (pos1+pos2); j++)
            {
                if(j == pos1)
                    cout << m[i][j];
                else
                    cout << " " << m[i][j]; 
            }
            //cout << pos1 << "a" << pos2 << endl;
            pos2 ++;
            if(i % 2 == 0)
                pos1--;
            cout << endl;
        }
    }

    return 0;
}