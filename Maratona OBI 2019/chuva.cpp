/*input
9 14
.......o......
.###...####.#.
..............
..######......
..............
.#.####....##.
..............
.....####.....
..............
*/

// D - Chuva 
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
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int n, m;
char c[505][505];

void solve(int i, int j){

    if((i<n && j<m && i>=0 && j>=0) && (c[i][j] == '.') && ((c[i-1][j] == 'o' && i-1 >= 0)|| (c[i][j-1] == 'o' && c[i+1][j-1] == '#' && j-1 >= 0 && i+1 < n) || (c[i][j+1] == 'o' && c[i+1][j+1] == '#' && i+1 < n && j+1 < m)) )
    {
        c[i][j] = 'o';
        //Chamada recursiva para os 3 lados (direita, esquerda e abaixo) da matriz!
        solve(i, j+1);
        solve(i, j-1);
        solve(i+1, j);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    //memset(c, -1, sizeof(c));

    f(0, n){
        fr(0, m){
    	    cin >> c[i][j];
        }
    }

    f(0, n){
        fr(0, m){

            if(c[i][j] == 'o'){
                
                if(c[i][j+1] == '.' && j+1 < m)
                    solve(i, j+1);
                if(c[i][j-1] == '.' && j-1 >= 0)
                    solve(i, j-1);
                if(c[i+1][j] == '.' && i+1 < n)
                    solve(i+1, j);
            }

        }
    }

    f(0, n){
    	fr(0, m){
            cout << c[i][j];
        }
        cout << endl;
    }

    return 0;
}