/*input
hoje eu visitei meus pais
tive que lavar meu cachorro pois ele estava fedendo
.
*/

// URI 1519 - Abreviações
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

set<string> memo;
set<string> ::iterator it;

size_t findCaseInsensitive(std::string data, std::string toSearch, size_t pos = 0)
{
    // Convert complete given String to lower case
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
    // Convert complete given Sub String to lower case
    std::transform(toSearch.begin(), toSearch.end(), toSearch.begin(), ::tolower);
    // Find sub string in given string
    return data.find(toSearch, pos);
}

void dp(string pal){
    if(memo.find(pal) != memo.end())
        return;
    if((int)pal.size() == 1){
        memo.insert(pal);
        return;
    }
    memo.insert(pal);

    f(0, (int)pal.size()){
        string aux = pal;

        aux.erase(aux.begin()+i);
        dp(aux);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string frase;

    while(getline(cin, frase)){

        dp(frase);
        for(it = memo.begin(); it != memo.end(); it++){
            cout << *it << endl;
        }
        cout << endl;
        /*do{
            cout << frase << endl;
        }while(next_permutation(frase.begin(), frase.end()));
        cout << endl;*/
        memo.clear();
    }
    return 0;
}