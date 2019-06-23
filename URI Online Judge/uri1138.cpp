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

int tens[]  = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
int nines[] = {0, 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 2000000000};

int hmNines(int x){
 for(int i=1; i<9 ;i++){
  if(x%tens[i] != nines[i]){
   if(x > nines[i-1]) return i-1;
   else return i-2;
  }
 }
 return 7;
}

vector<int> countDig(int a){
 vector<int> dig(10, 0);
 while(a > 0){
  int n = hmNines(a);
  for(int i=a/tens[n]; i ;i/=10)
   dig[ i%10 ] += tens[n];
  if(n) for(int i=0; i<10 ;i++)
   dig[ i ] += tens[n-1] * n;
  a -= tens[n];
 }
 return dig;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    while(cin >> a >> b && a && b){
        vector<int> digA = countDig(a-1);
        vector<int> digB = countDig(b);
        for(int i=0; i<10 ;i++)
            digB[i] -= digA[i];
        cout << digB[0];
        for(int i=1; i<10 ;i++)
            cout << " " << digB[i];
        cout << endl;
    }
    return 0;
}