/*input
1
8 8 2
........
........
........
...T....
..T.T...
..TTT...
........
........
5 4
6 2
*/

// URI 2595 - Cash Roial
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
#define pi 3.1415926535897
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

int dx[] = {1,-1,0,0,1,1,-1,-1}; // Direções em x
int dy[] = {0,0,1,-1,-1,1,-1,1}; // Direções em y
int n, m, p;
char grid[1005][1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;

    cin >> c;

    while(c--)
    {
        cin >> n >> m >> p;
        int x, y;
        f(0, n){
            fr(0, m)
                cin >> grid[i][j];
        }
        
        while(p--){
            cin >> x >> y;
            x--;
            y--;
            int res = 0;
            f(0, 8){
                int a = dx[i] + x;
                int b = dy[i] + y;
                if(a == n || a < 0 || b == m || b < 0 || grid[a][b] == '.') 
                    continue;
                res++;
            }
            if(res < 5)
                cout << "GG IZI" << endl;
            else
                cout << "GRRR" << endl;
        }
    }

    return 0;
}