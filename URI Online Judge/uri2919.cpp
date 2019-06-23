/*input
5
2 5 3 45 67
8
5 7 6 4 12 8 9 10
*/

// URI 2919 - Melhor Ordem
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

int buscaBinaria(std::vector<long long int> &v, int l, int r, int key) { 
    while (r-l > 1) { 
    int m = l + (r-l)/2; 
    if (v[m] >= key) 
        r = m; 
    else
        l = m; 
    } 
  
    return r; 
} 
  
int melhorOrdem(vector<long long int> &v) { 
    if(v.size() == 0) 
        return 0; 
  
    vector<long long int> tail(v.size(), 0); 
    int length = 1; // always points empty slot in tail 
  
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
        if (v[i] < tail[0]) 
            tail[0] = v[i]; // Novo menor valor!
        else if (v[i] > tail[length-1]) 
            tail[length++] = v[i];  // v[i] estende a maior sequencia
        else
            tail[buscaBinaria(tail, -1, length-1, v[i])] = v[i]; 
    } 
  
    return length; 
}

vector <long long int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, aux;

    while(cin >> n)
    {
        v.clear();
        for (int i = 0; i < n; i++){
            cin >> aux;
            v.push_back(aux);
        }
        cout << melhorOrdem(v) << endl; 
    }

    return 0;
}