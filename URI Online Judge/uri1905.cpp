/*input
2
 
0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 0 1 1
1 1 0 0 0
 
0 0 0 0 1
1 1 0 0 1
0 1 0 0 0
0 0 1 1 1
1 1 0 0 0 
*/

// URI 1905 - Polícia e Ladrão
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
#define NIL -1
typedef long long int ll;
typedef unsigned long long int ull;
//typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int m[5][5];
bool flag;

void floodFill(int x,int y){
    //Condições para garantir que a função recursiva termine!!!
    if((x<5 && y<5 && x>=0 && y>=0) && m[x][y] == 0){
        m[x][y] = 2;
        if(x == 4 && y == 4){
            flag = true;
        }
        //Chamada recursiva para os 4 lados da matriz!
        floodFill(x+1,y);
        floodFill(x-1,y);
        floodFill(x,y+1);
        floodFill(x,y-1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        flag = false;
        f(0, 5){
            fr(0, 5)
                cin >> m[i][j];
        }

        /*f(0, 5){
            fr(0, 5){
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;*/

        floodFill(0, 0);
        if(flag)
            cout << "COPS" << endl;
        else
            cout << "ROBBERS" << endl;
    }

    return 0;
}