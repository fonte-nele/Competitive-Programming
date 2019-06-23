/*input
4 40 46
0.25 2 2.25
0.4 3.75 4.85
13.5 102.5 139
8.7 96.5 116.8
0 0 0
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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cont = 1;
    double x, y, z;

    
    while(cin >> x >> y >> z && x != 0 && y != 0 && z !=0)
    {  
        double croc = round(x / 0.005);
        double misto = y - (croc * 0.025);
        double trad = z - (croc * 0.020);

        misto = round(misto / 0.025);
        trad -= (misto * 0.025);
        trad = round(trad / 0.050);
        //cout << trad << " Estou aqui " << endl;

        double sortida = round(trad / 10);
        croc -= (sortida*10); 
        misto -= (sortida*10);
        double pred = round(misto / 20);
        croc -= (pred*10);
        double especial = round(croc / 30);

        cout << "Caso #" << cont << ": " << especial << " Especial, " << pred << " Predileta e " << sortida << " Sortida" << endl;
        cont++;
    }
    return 0;
}