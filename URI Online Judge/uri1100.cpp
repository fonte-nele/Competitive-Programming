/*input
e2 e4
a1 b2
b2 c3
a1 h8
a1 h7
h8 a1
b1 c3
f6 f6
*/

// URI 1100 - Movimentos do Cavalo
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
#define MAX 10005
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int dist[8][8];
int di[] = {-2, -2, -1, -1,  1,  1,  2,  2};
int dj[] = {-1,  1, -2,  2, -2,  2, -1,  1};

int bfs(int xi, int xj, int yi, int yj){
    int i, j, k, i2, j2;
    
    dist[xi][xj] = 0;
    queue<ii> fila;
    fila.push(ii(xi, xj));

    while(!fila.empty()){
        i = fila.front().first;
        j = fila.front().second;
        fila.pop();
        for(k = 0; k < 8; k++){
            i2 = i+di[k];
            j2 = j+dj[k];
            if((i2 >= 0 && i2 < 8 && j2 >= 0 && j2 < 8) && dist[i2][j2] > dist[i][j] + 1){
                dist[i2][j2] = dist[i][j] + 1;
                fila.push(ii(i2, j2));
            }
        }
    }
    return dist[yi][yj];
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    while(cin >> a >> b){
        memset(dist, INF, sizeof(dist));
        int xi = a[0] - 'a', xj = a[1] - '1';
        int yi = b[0] - 'a', yj = b[1] - '1';

        cout << "To get from " << a << " to " << b << " takes " << bfs(xi, xj, yi, yj) << " knight moves." << endl;
    }

    return 0;
}