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

size_t findCaseInsensitive(std::string data, std::string toSearch, size_t pos = 0)
{
    // Convert complete given String to lower case
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
    // Convert complete given Sub String to lower case
    std::transform(toSearch.begin(), toSearch.end(), toSearch.begin(), ::tolower);
    // Find sub string in given string
    return data.find(toSearch, pos);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char frase[10005];

    while(fgets(frase, 10005, stdin) && strcmp(frase, ".") != 0){
        map<string, int> quantidade;
        map<string, int> :: iterator it;
        vector<string> pos;
        vector<string> ::iterator it1;
        string aux;
        char *pch;
        pch = strtok(frase, " ");
        while(pch != NULL){
            //cout << "pch = " << pch << endl;
            int tam = strlen(pch);
            aux.clear();
            for(int i = 0; i < tam; i++){
                if(pch[i] < 'a' || pch[i] > 'z')
                    tam--;
                else
                    aux.push_back(pch[i]);
            }
            pos.push_back(aux);
            pch = strtok(NULL, " ");
            //cout << "tamanho = " << tam << endl;
            quantidade[aux]++;
        }
        vector<bool> visitado(26, false);
        vector<string> pal(26);
        vector<int> freq(26, 0);
        string a;
        for(it = quantidade.begin(); it != quantidade.end(); it++){
            a = it->first;
            if(!visitado[a[0] - 'a'] && (int)(a.size() - 2) > 0){
                //cout << "a = " << a << " size = " << (int)(a.size() - 2)<< endl;
                visitado[a[0] - 'a'] = true;
                pal[a[0] - 'a'] = a;
                freq[a[0] - 'a'] = it->second;
            }
            else{
                if((freq[a[0] - 'a'] * (int)pal[a[0] - 'a'].size() - (2 * freq[a[0] - 'a'])) < ((int)a.size()* it->second - (2 * it->second))){
                    pal[a[0] - 'a'] = a;
                    freq[a[0] - 'a'] = it->second;
                }
            }
            //cout << a[0] << " quant = " << it->second << endl;
        }
        /*f(0, 26){
            cout << pal[i] << " - " << freq[i] << endl;
        }*/
        
        set<pair<char, string>> v;
        set<pair<char, string>> ::iterator it2;
        for(it1 = pos.begin(); it1 != pos.end(); it1++){
            int encontra = -1;
            f(0, 26){
                if(pal[i] == *it1){
                    encontra = i;
                }
            }
            //cout << "Aqui = " << *it1 << endl;
            //cout << encontra << endl;
            if(it1 == pos.begin()){
                if(encontra != -1){
                    cout << pal[encontra][0] << ".";
                    v.insert(make_pair(pal[encontra][0], pal[encontra]));
                }
                else{
                    cout << *it1;
                }
            }
            else{
                cout << " ";
                if(encontra != -1){
                    cout << pal[encontra][0] << ".";
                    v.insert(make_pair(pal[encontra][0], pal[encontra]));
                }
                else{
                    cout << *it1;
                }
            }
        }
        cout << endl << v.size() << endl;
        for(it2 = v.begin(); it2 != v.end(); it2++){
            cout << it2->first << ". = " << it2->second << endl;
        }
    }
    //cout << "aqui";
    return 0;
}uri