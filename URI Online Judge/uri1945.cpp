/*input
a := 2
b := 1
c := a + b
d := a + b
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tam, pos, pos1;
    string frase, a, b, c;
    map<string, int> m;
    map<string, int> :: iterator it;
    
    while(getline(cin, frase))
    {
        tam = frase.size();
        pos = frase.find(":=");

        a = frase.substr(0, pos-1);
        //cout << a << "." << endl;
        pos1 = frase.find("+");
        pos += 3;
        if(pos1 == -1){
            b = frase.substr(pos, tam-pos);
            //cout << b << endl;
            m[a] += atoi(b.c_str()); 
            //cout << a << "->" << m[a] << endl;
        }
        else{
            b = frase.substr(pos, pos1-pos-1);
            c = frase.substr(pos1+2, tam-pos1);
            //cout << b << endl;
            //cout << c << endl;
            if(b[0] >= '0' && b[0] <= '9'){
                if(c[0] >= '0' && c[0] <= '9')
                    m[a] += atoi(b.c_str()) + atoi(c.c_str());
                else
                    m[a] += atoi(b.c_str()) + m[c];
            }
            else{
                if(c[0] >= '0' && c[0] <= '9')
                    m[a] += m[b] + atoi(c.c_str());
                else
                    m[a] += m[b] + m[c];
            }
            //m[a] += m[b] + m[c];
            // cout << b << "-->" << m[b] << endl;
            // cout << c << "--->" << m[c] << endl;
            // cout << a << "->" << m[a] << endl;
        }
        //cout << endl;
    }
    cout << m[a] << endl;

    return 0;
}