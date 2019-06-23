/*input
BODY
10
<><BODY garbage>body</BODY>
aBc
923
<dont replacethis>abcabc<abcabcde>
table
1
<ta>bLe<TaBlewidth=100></table></ta>
replace
323
nothing inside
HI
667
92<HI=/><z==//HIb><cHIhi> 
a
23
<a B c a>
b
2
<b b abc ab c> Mangojata
*/

// URI 1254 - Substituição de Tag
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
    string pal, num, tag;

    while(cin >> pal >> num){
        getline(cin, tag);
        getline(cin, tag);

        bool abre;
        int tam = tag.size();
        f(0, tam){
            if(tag[i] == '<')
                abre = true;
            else if(tag[i] == '>')
                abre = false;
            if(abre){
                int pos = findCaseInsensitive(tag, pal, i+1);
                if(pos == -1)
                    continue;
                
                int pos1 = tag.find(">", pos);
                int pos2 = tag.find("<", pos);
                if(pos2 != -1){
                    if (pos1 < pos2 && pos1 != -1){
                        tag.replace(pos, pal.size(), num);
                    }
                }else if(pos1 != -1){
                    tag.replace(pos, pal.size(), num);
                }
                //cout << "pos = " << pos << " pos1 = " << pos1 << " pos2 = " << pos2 << endl;
            }
        }
        cout << tag << endl;
    }

    return 0;
}