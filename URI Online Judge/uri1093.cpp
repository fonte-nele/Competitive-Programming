/*input
1 1 3 1
1 2 1 1
8 5 3 1
7 5 2 4
0 0 0 0
*/

// URI 1093 - Vampiros
#include <bits/stdc++.h>
#include <string>
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

double gambler(int n1, int n2, int at){ 
    double p; 
    if(at == 3){ // Probabilidade 50%
        return (double)n1/(double)(n1+n2); 
    }else{ // Propriedade da lei de gambler 
        p = 1.0 - (6-at)/6.0; 
        p = (1 - p)/p; 
        return (1.0 - pow(p,n1))/(1.0 - pow(p,n1+n2));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ev1, ev2, at, d, aux;

    while(cin >> ev1 >> ev2 >> at >> d && ev1 && ev2 && at && d)
    {
        double porc;

        aux = ev1; 
        ev1 = 0; 
        while(aux > 0){ 
            aux -= d; 
            ev1++; 
        } 
        aux= ev2; 
        ev2 = 0; 
        while(aux > 0){ 
            aux -= d; 
            ev2++; 
        } 
        porc = gambler(ev1,ev2,at);


        cout << fixed << setprecision(1) << porc*100 << endl;
    }

    return 0;
}