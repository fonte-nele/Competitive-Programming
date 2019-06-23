/*input
sanduicheiche
barrilarril
ratoato
sol
coliseueu
queijoijo
astroastro
a
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

bool endsWith(string &a, string &b) {
    if (a.length() < b.length()) 
        return false;
    return a.substr(a.length() - b.length()) == b;
}

string resp(string palavra)
{
    string a = palavra;
    string b = "";
    int tam = palavra.size();
    f(1, tam+1){
        string aa = palavra.substr(0, palavra.length() - i);
        string bb = palavra.substr(palavra.length() - i);
        if (endsWith(aa, bb)) a = aa, b = bb;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int soma, contador;
    string palavra;

    while(cin >> palavra)
    {
        cout << resp(palavra) << endl;
    }

    return 0;
}