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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, cont = 0;
    cin >> n;
    getchar();
    //getchar();
    cin.ignore();
    map <st, st> v;
    st nome, nome2;

    f(0, n)
    {
        getchar();
        getline(cin, nome);
        getchar();
        getline(cin, nome2);
        getchar();

        //cout << nome << endl;
        //cout << nome2 << endl;
        v[nome] = nome2;
    }
    cin >> m;
    cin.ignore();

    f(0, m)
    {
        getchar();
        getline(cin, nome);
        getchar();
        getline(cin, nome2);
        getchar();
        //cout << nome << endl;
        //cout << nome2 << endl;
        /*if(v.find(nome) != v.end())
        {
            if(v[nome] == )
            cont ++;
        }*/
        cout << nome << endl;


        int tam = (int) v[nome2].size (); 
        
        for (int i = 0; i < tam; i++)
            cout << v[nome2][i];

        cout << endl << endl;

        cont++;
    }
    v.clear();

    return 0;
}