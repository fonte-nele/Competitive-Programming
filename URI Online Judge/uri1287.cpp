/*input
lo6
234,657

hi
,,,,,5,,5,    4
2200000000
00
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string frase;
    while(getline(cin, frase)){
        //cout << "frase " << frase << endl;
        string resp = "";
        bool flag = true;
        int tam = frase.size();
        f(0, tam){
            if(frase[i] == 'l')
                resp += "1";
            else if(tolower(frase[i]) == 'o')
                resp += "0";
            else if(isdigit(frase[i]))
                resp += frase[i];
            else if(frase[i] != ' ' && frase[i] != ','){
                flag = false;
                break;
            }
        }
        if(!flag)
            cout << "error" << endl;
        else{
            int pos = 0;
            while(resp[pos] == '0' && isdigit(resp[pos+1]))
                resp.erase(0, 1);

            tam = resp.size();
            if(resp == "" || tam > 10)
                cout << "error" << endl;
            else if(tam == 10)
                cout << (resp <= "2147483647" ? resp : "error") << endl;
            else
                cout << resp << endl;
        }
    }

    
    return 0;
}