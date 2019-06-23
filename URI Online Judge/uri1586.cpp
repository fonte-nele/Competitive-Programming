/*input
9
Ana
Bruna
Cro
Digory
Emerson
Fiaror
Geomar
Iago
Zacarias
14
Aule
Este
Lorien
Mandos
Manwe
Nessa
Nienna
Orome
Tulkas
Ulmo
Vaire
Vana
Varda
Yavanna
0
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
#define INF 0x3f3f3f3f3f3f3f3fLL
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
    
    int n;
    unsigned long long int timeA, timeB, x;
    bool empate;
    
    while(cin >> n && n != 0)
    {
        empate = false;
        vector<string> v(n);
        int strength[100005] = {0};

        f(0, n){
            cin >> v[i];
            fr(0, (int)v[i].size())
            {
                strength[i] += v[i][j];
            }
        }

        int min = -1, max = n;
        int meio = (min + max)/2;
        
        while(min <= max)
        {
            timeA = timeB = 0;
            x = 1;

            for(int j = meio; j >= 0; j-- ){
                timeA +=  strength[j] * x;
                x++;
            }

            x = 1;

            for(int j = meio + 1; j < n; j++){
                timeB += strength[j] * x;
                x++;
            }

            if( timeA < timeB ){
                min = meio + 1;
                meio = ( min + max ) / 2;
            }
            else if( timeA > timeB ){
                max = meio - 1;
                meio = ( min + max ) / 2;
            }
            else{
                empate = true;
                break;
            }
        }
        if(empate)
            cout << v[meio] << endl;
        else
            cout << "Impossibilidade de empate." << endl;

        empate = 0;
    }

    return 0;
}