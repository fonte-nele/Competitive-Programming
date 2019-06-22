/*input
3
ABC
3
ACB
CBA
BAC
*/

// L - Gabarito
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
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;

    cin >> k;
    vector<char> v(k);

    f(0, k){
        cin >> v[i];
    }

    cin >> n;
    vector<vector<char>> resp;
    char aux;
    resp.resize(n);
    
    f(0, n){

        fr(0, k){
            cin >> aux;
            resp[i].push_back(aux);
        }
    }
    int soma = 0;
    f(0, k){
        map<char, int> cont;
        map<char, int> :: iterator it;
        fr(0, n){
            
            //cout << resp[j][i] << " ";
            cont[resp[j][i]]++;
        }
        //cout << endl;
        int maior = 0;
        for(it = cont.begin(); it != cont.end(); it++){
            //cout << it->first << " second = " << it->second << endl;
            if(it->second > maior && it->first != v[i]){
                maior = it->second;
            }
        }
        soma += maior;
        //cout << endl;
    }
    cout << soma << endl;
    return 0;
}