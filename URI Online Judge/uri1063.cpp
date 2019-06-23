/*input
4 5
100
10
1 2 2 2 2 3 3 4 4 5
5 4
100
7
4 5 4 4 4 4 3
4 5
99
4
4 4 4 4
3 2
100
7
2 4 1 4 2 4 4
0 0
*/

// URI 1086 - O Salão do Clube
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

set<string> dic;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while(cin >> n && n){

        char in[n], out[n];
        f(0, n)
            cin >> in[i];
        f(0, n)
            cin >> out[i];

        stack<char> pilha;
        int cont = 0;

        f(0, n){
            pilha.push(in[i]);
            cout << "I";

            while(pilha.size() > 0 && out[cont] == pilha.top()){
                cont++;
                pilha.pop();
                cout << "R";
            }
        }
        if(pilha.size() != 0){
            cout << " Impossible";
        }

        cout << endl;
    }

    return 0;
}