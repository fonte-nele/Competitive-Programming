/*input
1011
2
5
2
*/

// K - Dabriel e a divisibilidade
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

    string n;
    int m, num, r;
    multiset<int> v;
    multiset<int> :: iterator it;

    cin >> n >> m;

    f(0, m){
        cin >> num;
        r = 0;
        fr(0, (int)n.size()){
            int dig = n[j] - '0';
            //cout << dig << " ";
            r = (r * 2 + dig) % num; // (r * 10 + n[i]) % m    Formula Editorial
        }
        //cout << endl;
        if(r == 0)
            v.insert(num);
    }

    if(v.empty()){
        cout << "Nenhum" << endl;
    }else{
        for(it = v.begin(); it != v.end(); it++){
            if(it == v.begin()){
                cout << *it;
            }
            else{
                cout << " " << *it;
            }
        }
        cout << endl;
    }
    
    return 0;
}