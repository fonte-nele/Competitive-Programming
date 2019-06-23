// URI 1440 - Praça de Alimentação
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, h, m, s;
    char aux, e;

    while(cin >> n && n != 0)
    {
        int contE, contX, contN, cont;
        contE = contX = contN = cont = 0;
        vector<pair<long, char>> v;
        f(0, n){
            cin >> h >> aux >> m >> aux >> s >> e;
            if(e == 'E')
                contE++;
            else if(e == 'X')
                contX++;
            else if(e == '?')
                contN++;
            //cout << h << " m  " << m << " " << s << endl;
            v.push_back(make_pair(h*3600 + m*60 + s, e));
            //cout << e << endl;
        }
        sort(v.begin(), v.end());
        //cout << contE << " " << contX << " " << contN << " " << cont << endl;
        // if(contE == contX){
        //     cont = contE + (contN / 2);
        // }

        f(0, n){
            //cout << v[i].first << " " << v[i].second << endl;
            if(v[i].second == '?')
            {
                if(contE < n/2){
                    contE++;
                    v[i].second = 'E';
                }
                else
                    v[i].second = 'X';
            }
        }

        int a=0;
        f(0, n){
            if((i == 0 && v[i].second == 'E') || (i==0 && v[i].second == '?') || v[i].second == 'E')
                a++;
            else if(v[i].second == 'X')
                a--;
            cont = max(a, cont);        
        }
        cout << cont << endl;
    }

    return 0;
}