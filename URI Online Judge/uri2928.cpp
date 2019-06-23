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
    
    int n;
    string lin;
    
    cin >> n;
    getline(cin, lin); // Pegar quebra de linha!
    vector<string> v;
    f(0, n){
        getline(cin, lin);
        v.push_back(lin);
    }

    bool enc = true;
    int quant = 0, aux = 0;
    f(0, n){
        if(v[i][0] == '.'){
            aux++;
            if(i == n-1)
            {
                if(aux > 2)
                    enc = false;
                else
                    quant++; 
            }
        }
        else{
            if(aux > 2){
                enc = false;
                break;
            }
            if(aux > 0)
                quant++;
            aux = 0;
        }
    }
    if(enc)
        cout << quant << endl;
    else
        cout << "N" << endl;

    return 0;
}