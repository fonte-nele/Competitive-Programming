//URI 2465 - Passa Bolinha
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
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

int m[101][101], aux[101][101], cont = 1;

void preencher(int x, int y, int n)
{
    if(x < n && y+1 < n){
        if(m[x][y+1] >= m[x][y] && aux[x][y+1] == 0){
            aux[x][y+1] = 1;
            cont++;
            preencher(x, y+1, n);
        }
    }
    if(x+1 < n && y < n){
        if(m[x+1][y] >= m[x][y] && aux[x+1][y] == 0){
            aux[x+1][y] = 1;
            cont++;
            preencher(x+1, y, n);
        }
    }
    if(x < n && y-1 >= 0){
        if(m[x][y-1] >= m[x][y] && aux[x][y-1] == 0){
            aux[x][y-1] = 1;
            cont++;
            preencher(x, y-1, n);
        }
    }
    if(x-1 >= 0 && y < n){
        if(m[x-1][y] >= m[x][y] && aux[x-1][y] == 0){
            aux[x-1][y] = 1;
            cont++;
            preencher(x-1, y, n);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x, y;
    cin >> n >> x >> y;

    x--;
    y--;
    
    f(0, n)
    {
        fr(0, n)
            cin >> m[i][j];
    }
    memset(aux, 0, sizeof(aux));
    aux[x][y] = 1;
    preencher(x, y, n);

    cout << cont << endl;

    return 0;
}