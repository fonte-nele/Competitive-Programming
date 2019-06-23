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
#define pi 3.1415
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
	int quant, num, valor;
	bool flag = false;

	cin >> quant;
	vector<int> v(quant);

	f(0, quant)
	{
		cin >> v[i];
	}
	sort(all(v));
	valor = v[quant-1];
	valor += 1;

	while(!flag)
	{
		f(0, quant)
		{
			num = v[i];
			if(__gcd(num, valor) != 1)
			{
				valor++;
				break;
			}
			else if(i == quant-1)
			{
				flag = true;
			}
		}
	}
	cout << valor << endl;

	return 0;
}