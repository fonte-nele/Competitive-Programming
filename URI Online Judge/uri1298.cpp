/*input
3
HVH
VVV
HHH
HHH
VHV
1
H
1
V
*/

// URI 1298 - Corrija o Labirinto
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
#define MAX 605
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

bool visitado[MAX][MAX], pos[MAX][MAX][4], c[MAX][MAX];
int n, tam, di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, 1, -1};

void bfs(){
    
    f(0, 2*n){
        fr(0, 2*n+1){
            if(!visitado[i][j]){
                queue<pair<int, int> > q;
                q.push(make_pair(i, j));
                visitado[i][j] = 1;

                while(!q.empty()){
                    pair<int, int> p = q.front();
                    q.pop();

                    for(int k = 0; k < 4; k++){
                        int x = p.first + di[k];
                        int y = p.second + dj[k];

                        if(x >= 0 && x < 2*n && y >= 0 && y < 2*n+1){
                            if(!visitado[x][y] && pos[p.first][p.second][k]){
                                visitado[x][y] = 1;
                                q.push(make_pair(x, y));
                            }
                        }
                    }
                }
                tam++;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch;

    while(cin >> n){
        
        memset(pos, 1, sizeof(pos));
        memset(visitado, 0, sizeof(visitado));
        f(0, 2*n-1){
            fr(0, n){
                cin >> ch;

                int x = i;
                int y = 2*j+ (i&1);
                if(ch == 'H'){
                    pos[x][y][1] = pos[x][y+1][1] = 0;
                    pos[x+1][y][0] = pos[x+1][y+1][0] = 0;
                }else{
                    pos[x][y][2] = pos[x][y+1][3] = 0;
                    pos[x+1][y][2] = pos[x+1][y+1][3] = 0;
                }
            }
        }
        tam = -1;

        bfs();
        cout << tam << endl;
    }
    return 0;
}