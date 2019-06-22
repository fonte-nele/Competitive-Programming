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
	int I = 0, l = 0, o = 0, v = 0, e = 0, y = 0, u = 0, ex = 0;
	st frase;

	getline(cin, frase);
	int tam = (int)frase.size();
	
	f(0, tam)
	{
		if(frase[i] == 'I')
			I++;
		else if(frase[i] == 'l')
			l++;
		else if(frase[i] == 'o')
			o++;
		else if(frase[i] == 'v')
			v++;
		else if(frase[i] == 'e')
			e++;
		else if(frase[i] == 'y')
			y++;
		else if(frase[i] == 'u')
			u++;
		else if(frase[i] == '!')
			ex++;
	}
	o /= 2;

	cout << min(I,min(l, min(o, min(v, min(e, min(y, min(u, ex))))))) << endl;

	return 0;
}