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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string num, aux;

    while(cin >> num){

        while(num.at(num.size()-1) != '#'){

            cin >> aux;
            num += aux;
        }
        int tam = num.size();
        int resto = 0, carac;

        for (int i = 0; i < tam-1; ++i){
            carac = num[i] - '0';
            resto = resto * 2 + carac;
            resto %= 131071;
        }

        cout << (resto == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}