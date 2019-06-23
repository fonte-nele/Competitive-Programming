/*input
Hallo, dies ist eine
ziemlich lange Zeile, die in Html
aber nicht umgebrochen wird.
<br>
Zwei <br> <br> produzieren zwei Newlines.
Es gibt auch noch das tag <hr> was einen Trenner darstellt.
Zwei <hr> <hr> produzieren zwei Horizontal Rulers.
Achtung mehrere Leerzeichen irritieren
Html genauso wenig wie
mehrere Leerzeilen.
*/

// URI 1667 - HTML
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
    
    string text, pal;
    int cont = 0;
    vector<string> v;
    while(getline(cin, text))
    {
        //cout << text << endl;
        stringstream ss;
        ss << text;
        while(ss >> pal){
            v.push_back(pal);
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        bool b = true;
        pal = v[i];
        string st = (i!=0)? v[i-1] : pal;
        if(cont+pal.size() > 80 and pal != "<br>" and pal[pal.size()-1] != '.'){
            cout << endl, cont = 0;
        }else if(cont+pal.size()+1 > 80 and pal != "<br>" and pal[pal.size()-1] == '.'){
            cout << endl, cont = 0;
        }
        if(st[st.size()-1] == '.' and cont > 75 and pal != "<br>"){
            cout << endl, cont = 0;
        }
        if(v[i] == "<br>"){
            cout << endl;
            cont = 0,b=false;
        }
        else if(v[i] == "<hr>")
            if(cont!=0) cout << endl << "--------------------------------------------------------------------------------\n",cont = 0,b=false;
            else cout << "--------------------------------------------------------------------------------\n",cont = 0,b=false;
        else  (i==0 or cont == 0)?  cout << v[i] : cout << " " << v[i];
        if(b)cont += pal.size()+1;
    }
    if(pal != "<br>")cout << endl;
    return 0;
}