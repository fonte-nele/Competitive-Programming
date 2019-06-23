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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string num;
    while(cin >> n && n)
    {
        while(n--){
            cin >> num;
            int zero = 0, um = 0, soma0 = 0, soma1 = 0;
            reverse(num.begin(), num.end());

            for(int i=0; i < (int)num.size(); i++){
                if(i % 2 == 0)
                    zero += (num[i] - '0');
                else
                    um += (num[i] - '0');
            }
            //cout << "zero = " << zero << endl;
            //cout << "um = " << um << endl;
            while(zero > 9){
                soma0 += (zero%10);
                zero /= 10;
            }
            soma0 += zero;
            while(um > 9){
                soma1 += (um%10);
                um /= 10;
            }
            soma1 += um;


            cout << soma0 + soma1 << endl;
        }

    }

    return 0;
}