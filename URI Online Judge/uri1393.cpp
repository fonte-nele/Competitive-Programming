/*input
1
4
2
10
0
*/

// URI 1393 - Lajotas Hexagonais
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

/*unsigned long long int v[41];

unsigned long long int fibo(int pos){
    if(pos == 1 || pos == 2)
        return 1;
    else
        return fibo(pos-1) + fibo(pos-2);
}*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    /*v[0] = 1;
    v[1] = 2;
    for(int i = 2; i < 41; i++){
        v[i] = fibo(i+2);
    }

    f(0, 41){
        cout << v[i] << endl;
    }*/

    unsigned long long int v[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,
            2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418,
            317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465,
            14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296};

    while(cin >> n && n)
    {
        cout <<  v[n-1] << endl;  
    }

    return 0;
}