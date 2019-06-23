/*input
3 4 5
4 30 32
*/

// URI 1219 - Flores Coloridas
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

    int a, b , c;

    while(cin >> a >> b >> c){
        double perimetro = (a+b+c) / 2.0;
        double areaT = sqrt(perimetro * (perimetro-a) * (perimetro-b) * (perimetro-c));
        double raio = areaT / perimetro;
        double areaC = pi * raio * raio;
        double areaV = areaT - areaC;
        double raioS = (a*b*c) / (4*areaT);
        double areaS = pi * raioS * raioS - areaT;

        cout << fixed << setprecision(4) << areaS << " " << areaV << " " << areaC << endl;


    }

    return 0;
}