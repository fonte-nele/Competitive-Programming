/*input
8 3
xxxxxxxx
3 3
3 4
3 7
11 3
xooxoxxxxox
5 6
10 43
9 1000
0 0
*/

// URI 1622 - Lâmpadas
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

int encontrar(int k, int n){
    int ans = 1;
    int id = k;
    while(id != 0){
        ans++;
        id = (id + k) % n;
    }
    return ans;
}

void mudar(char &a){
    a = a == 'x' ? 'o' : 'x';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;

    while(cin >> n >> q && (n || q)){
        string linha;
        cin >> linha;

        int ult = 0, k, m;
        
        while(q--){
            cin >> k >> m;
            int p = encontrar(k, n) * 2;
            m %= p;
            ult = 0;
            string aux = linha;
            while(m--){
                mudar(aux[ult]);
                ult = (ult + k) % n;
            }
            cout << aux << endl;
        }
    }

    return 0;
}