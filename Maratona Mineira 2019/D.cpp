/*input
5 3 
2 10 720 
3 7 120 
1 3 135 
5 10 563 
4 11 735
*/

// D - Prêmios da Mineira
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

typedef struct prob
{
	int id;
	int quant;
	int penalidade;
}Ttime;

bool compare(const Ttime& t1, const Ttime& t2){
	if(t1.quant != t2.quant)
		return t1.quant > t2.quant;
	else
		return t1.penalidade < t2.penalidade;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<Ttime> v(n);

    f(0, n){
    	cin >> v[i].id >> v[i].quant >> v[i].penalidade;
    }

    sort(v.begin(), v.end(), compare);
    /*f(0, n){
    	cout << v[i].quant << " " << v[i].penalidade << endl;
    }*/
    cout << v[k-1].id << endl;
    return 0;
}