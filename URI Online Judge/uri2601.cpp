/*input
1
*
1 2 6 5
*
*/

// URI 2601 - Tustin e Seu Dado Antigo
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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;


    cin >> n;
    int pot[] = {1, 2, 4, 8};
    int fat[] = {1, 1, 2, 6};

    while(n--)
    {
        char face[6];
        int cont = 0;

        f(0, 6){
            cin >> face[i];
        }
        if(face[0] == face[5] && face[0] == '*')
            cont++;
        if(face[1] == face[3] && face[1] == '*')
            cont++;
        if(face[2] == face[4] && face[2] == '*')
            cont++;

        // Fórmula combinação: 2^n * n!
        cout << pot[cont] * fat[cont] << endl;
    }

    return 0;
}