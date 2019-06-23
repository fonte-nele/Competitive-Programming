/*input
6 7
XXAAXXX
XXAAXAX
XXXXAXX
XAAAAAX
TAAXAAA
XXXXXXX
3 3
TTT
XXX
AAA
0 0
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
char mat[51][51];

void floodFill(char cor,int x,int y,int lin,int col,char cor_ant)
{
    //Condições para garantir que a função recursiva termine!!!
    if((x<lin && y<col && x>=0 && y>=0) && mat[x][y] == cor_ant)
    {
        mat[x][y] = cor;
        //Chamada recursiva para os 4 lados da matriz!
        floodFill(cor,x+1,y,lin,col,cor_ant);
        floodFill(cor,x-1,y,lin,col,cor_ant);
        floodFill(cor,x,y+1,lin,col,cor_ant);
        floodFill(cor,x,y-1,lin,col,cor_ant);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;

    while(cin >> n >> m && n != 0 && m != 0)
    {
        mem(mat, '0');

        f(0, n)
        {
            fr(0, m)
            {
                cin >> mat[i][j];
            }
        }
        
        f(0, n)
        {
            fr(0, m)
            {
                if(mat[i][j] == 'T')
                {
                    if(mat[i+1][j] == 'A' && i+1 < n)
                    {
                        floodFill('T', i+1, j, n, m, 'A');
                    }
                    if(mat[i][j+1] == 'A' && j+1 < m)
                    {
                        floodFill('T', i, j+1, n, m, 'A');
                    }
                    if(mat[i-1][j] == 'A' && i-1 >= 0)
                    {
                        floodFill('T', i-1, j, n, m, 'A');
                    }
                    if(mat[i][j-1] == 'A' && j-1 >= 0)
                    {
                        floodFill('T', i, j-1, n, m, 'A');
                    }
                }
            }
        }
        
        f(0, n)
        {
            fr(0, m)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}