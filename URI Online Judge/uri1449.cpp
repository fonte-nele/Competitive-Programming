/*input
2
4 3
galaxy
cara tossiu
kagayaku
canalha do
atsuki
alto que
yuushi
util
o galaxy
o galaxy
o kagayaku atsuki yuushi
3 1
bashulhan
sobre a mesa
hu
esta
hasefer
o livro
hasefer hu bashulhan

*/

// URI 1449 - O Fantástico Jaspion
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
#define MAX 1010
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, m, n;

    cin >> c;
    while(c--){

        cin >> m >> n;

        map<string, string> dic;
        map<string, string> :: iterator it;
        string pal, trad, frase;
        f(0, m)
        {
            cin >> pal;
            getline(cin, trad);
            getline(cin, trad);
            dic[pal] = trad;
            //cout << "pal = " << pal << endl;
            //cout << "trad = " << trad << endl;
        }

        f(0, n){
            bool flag = false;
            getline(cin, frase);
            stringstream ss;
            string p;
            ss << frase;
            while(!ss.eof()){
                ss >> p;
                it = dic.find(p);
                if(it == dic.end()){
                    if(!flag){
                        cout << p;
                        flag = true;
                    }else
                        cout << " " << p;
                }
                else{
                    if(!flag){
                        cout << it->second;
                        flag = true;
                    }else
                        cout << " " << it->second;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
