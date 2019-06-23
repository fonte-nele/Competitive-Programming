/*input
4
hello
hell
heaven
goodbye
3
hi
he
h
7
structure
structures
ride
riders
stress
solstice
ridiculous
*/

// URI 1284 - Digitando no Telefone Celular
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

size_t findCaseInsensitive(std::string data, std::string toSearch, size_t pos = 0)
{
    // Convert complete given String to lower case
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
    // Convert complete given Sub String to lower case
    std::transform(toSearch.begin(), toSearch.end(), toSearch.begin(), ::tolower);
    // Find sub string in given string
    return data.find(toSearch, pos);
}

int suf[1000005][27], tam = 1;

int pesquisa(string s){
    int cont = 0, node = 0, c;

    for(int i = 0; i < (int)s.size(); i++){
        int tmp = 0;
        if(s[i] != '$'){
            fr(0, 27){
                if(suf[node][j] != -1)
                    tmp++;
            }
        }
        if(tmp > 1 || (tmp == 1 && node == 0))
            cont++;
        if(s[i] == '$')
            c = 26;
        else
            c = s[i] - 'a';
        node = suf[node][c];
    }
    return cont;
}

void inserir(string s){
    int node = 0;
    f(0, (int)s.size()){
        int c;
        if(s[i] == '$')
            c = 26;
        else
            c = s[i] - 'a';
        if(suf[node][c] == -1){
            suf[node][c] = tam;
            memset(suf[tam], -1, sizeof suf[tam]);
            tam++;
        }
        node = suf[node][c];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string pal;
    vector<string> sufixos;
    while(cin >> n)
    {
        tam = 1;
        memset(suf[0], -1, sizeof suf[0]);
        f(0, n){
            cin >> pal;
            pal += "$";
            sufixos.push_back(pal);
            inserir(pal);
        }

        int soma = 0;
        f(0, (int)sufixos.size()){
            int tmp = pesquisa(sufixos[i]);
            soma += tmp;
        }
        cout << fixed << setprecision(2) << soma/(double)n << endl;
        sufixos.clear();
    }

    return 0;
}