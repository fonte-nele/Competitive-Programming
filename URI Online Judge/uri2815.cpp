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

    st frase;

    getline(cin, frase);
    //cout << frase;
    int i, tam = (int)frase.size();
    bool flag = true;

    for(i = 0; i < tam-3; i++)
    {
        if(tolower(frase[i]) == tolower(frase[i+2]) && tolower(frase[i+1]) == tolower(frase[i+3]))
        {
            cout << frase[i] << frase[i+1];
            if(i > tam-5)
                flag = false;
            i += 3;
        }
        else
            cout << frase[i];

    }
    //cout << tam << " " <<i;
    if(i != tam-3)
    {
        while(i < tam)
        {
            cout << frase[i];
            i++;
        }
    }
    else if(flag)
        cout << frase[i] << frase[i+1] << frase[i+2];

    cout << endl;

    return 0;
}