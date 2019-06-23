/*input
4 5
100
10
1 2 2 2 2 3 3 4 4 5
5 4
100
7
4 5 4 4 4 4 3
4 5
99
4
4 4 4 4
3 2
100
7
2 4 1 4 2 4 4
0 0
*/

// URI 1086 - O Salão do Clube
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

set<string> dic;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char pal[100005];
    char *p;

    while(cin >> pal){

        int tam = strlen(pal);
        f(0, tam){
            pal[i] = tolower(pal[i]);
            if(pal[i] < 'a' || pal[i] > 'z')
                pal[i] = 32;
        }
        p = strtok(pal, " ");

        while(p != NULL){
            if(strlen(p) != 0)
                dic.insert(p);
            p = strtok(NULL, " ");
        }
    }
    set<string> ::iterator it;
    for(it = dic.begin(); it != dic.end(); it++){
        cout << (*it).c_str() << endl;
    }
    return 0;
}