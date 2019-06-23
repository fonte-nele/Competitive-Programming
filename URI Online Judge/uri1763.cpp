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

    string nome;

    while(cin >> nome)
    {
        if(nome == "brasil" || nome == "portugal")
            cout << "Feliz Natal!" << endl;
        else if(nome == "alemanha")
            cout << "Frohliche Weihnachten!" << endl;
        else if(nome == "austria")
            cout << "Frohe Weihnacht!" << endl;
        else if(nome == "coreia")
            cout << "Chuk Sung Tan!" << endl;
        else if(nome == "espanha" || nome == "argentina" || nome == "chile" || nome == "mexico")
            cout << "Feliz Navidad!" << endl;
        else if(nome == "grecia")
            cout << "Kala Christougena!" << endl;
        else if(nome == "estados-unidos" || nome == "inglaterra" || nome == "australia" || nome == "antardida" || nome == "canada")
            cout << "Merry Christmas!" << endl;
        else if(nome == "suecia")
            cout << "God Jul!" << endl;
        else if(nome == "turquia")
            cout << "Mutlu Noeller" << endl;
        else if(nome == "irlanda")
            cout << "Nollaig Shona Dhuit!" << endl;
        else if(nome == "belgica")
            cout << "Zalig Kerstfeest!" << endl;
        else if(nome == "italia" || nome == "libia")
            cout << "Buon Natale!" << endl;
        else if(nome == "siria" || nome == "marrocos")
            cout << "Milad Mubarak!" << endl;
        else if(nome == "japao")
            cout << "Merii Kurisumasu!" << endl;
        else
            cout << "--- NOT FOUND ---" << endl;
    }

    return 0;
}