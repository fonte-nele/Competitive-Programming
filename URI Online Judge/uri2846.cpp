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
vector <int> nulos(25);

void fib(int n)
{
  	int pos = 0, a = 0, b = 1, c, i;
  	if(n == 0)
    	return;
  	for(i = 2; i <= n; i++, pos++)
  	{
    	c = a + b;
    	a = b;
     	b = c;
     	nulos[pos] = b;
     	cout << nulos[pos] << endl;
  	}
}

int main()
{
	int num, pos = 1, cont = 0;

	// vector <int> nulos = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
	cin >> num;
	/*fib(25);
	f(0, num)
	{
		if(i+1 == nulos[cont])
		{
			cout << i+1 << " -> Termo FIBO" << endl;
			cont++;
		}
		else
		{
			cout << i+1 << " -> " << pos << endl;
			pos++;
		}
	}*/
	if(num < 2)
		cout << num + 3 << endl;
	else if(num < 4)
		cout << num + 4 << endl;
	else if(num < 8)
		cout << num + 5 << endl;
	else if(num < 15)
		cout << num + 6 << endl;
	else if(num < 27)
		cout << num + 7 << endl;
	else if(num < 47)
		cout << num + 8 << endl;
	else if(num < 80)
		cout << num + 9 << endl;
	else if(num < 134)
		cout << num + 10 << endl;
	else if(num < 222)
		cout << num + 11 << endl;
	else if(num < 365)
		cout << num + 12 << endl;
	else if(num < 597)
		cout << num + 13 << endl;
	else if(num < 973)
		cout << num + 14 << endl;
	else if(num < 1582)
		cout << num + 15 << endl;
	else if(num < 2568)
		cout << num + 16 << endl;
	else if(num < 4164)
		cout << num + 17 << endl;
	else if(num < 6747)
		cout << num + 18 << endl;
	else if(num < 10927)
		cout << num + 19 << endl;
	else if(num < 17691)
		cout << num + 20 << endl;
	else if(num < 28636)
		cout << num + 21 << endl;
	else if(num < 46346)
		cout << num + 22 << endl;
	else if(num < 75002)
		cout << num + 23 << endl;
	else
		cout << num + 24 << endl;

	return 0;
}