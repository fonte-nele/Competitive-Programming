/*input
3
1
2
3
*/
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
//const double M_PI = 3.14159265358979323846;

//#define tg 0.726542528
/*
    Link para fórmula
    https://brasilescola.uol.com.br/matematica/area-um-poligono-regular.htm
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, n;
    double area, a;

    cin >> c;
    f(0, c)
    {
        cin >> n;
        

        a = ((double) n/2)/ tan(36.0 * M_PI / 180.0 );
        area = (a*(n*5)) /2;

        cout << fixed << setprecision(3) << area << endl;
    }
    
    return 0;
}