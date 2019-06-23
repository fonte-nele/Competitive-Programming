/*input
5
7
54782
0158309
12345678910
987654321
0
*/

// URI 1629 - DescompactaFACE
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

bool Compare(const pair<string, int>& a, const pair<string, int>& b){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string frase;
    while(cin >> n && n)
    {
        getline(cin, frase);
        map<string, int> m;
        map<string, int> :: iterator it;
        char fim;
        int cont = 0;
        for(int j = 0; j < n; j++){
            getline(cin, frase);
            if(j != 0)
                frase = fim + frase;
            int tam = frase.size();
            //cout << frase << endl;
            string aux;

            for(int i = 0; i < tam-1; i++)
            {
                aux = frase.substr(i, 2);
                //cout << "aux = " << aux << endl;
                cont ++;
                m[aux]++;
            }
            fim = frase[tam-1];
        }
        vector<pair<string, int>> v;
        vector<pair<string, int>> ::iterator it1;
        for(it = m.begin(); it != m.end(); it++){
            //cout << it->first << " cont = " << it->second << " size = " << (double)it->second/cont << endl;
            v.push_back(make_pair(it->first, it->second));
        }
        sort(v.begin(), v.end(), Compare);
        int cinco = 0;
        for(it1 = v.begin(); cinco < 5; it1++){
            cout << it1->first << " " << it1->second << " " << fixed << setprecision(6) << (double)it1->second/cont << endl;
            cinco++;
        }
        cout << endl;
    }

    return 0;
}