#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

typedef unsigned long long llu;

int ones_of(long long n)
{
	int count = 0;

	while (n > 0) 
	{
		if (n & 1) count++;
		n = n >> 1;
	}
	return count;
}

int main() 
{
	int tc;
	cin >> tc;

	// Para cada caso de teste.
	while (tc--) 
	{
		int n;
		cin >> n;

		// Construindo os conjuntos.
		vector<llu> sets(n);

		for (int i = 0; i < n; i++) 
		{
			int x;
			cin >> x;

			while (x--) 
			{
				int bit;
				cin >> bit;
				sets[i] = sets[i] | (1ull << bit);
			}
		}

		// Respondendo as operações.
		int q;
		cin >> q;

		while (q--) 
		{
			int o, x, y;
			cin >> o >> x >> y;

			if (o == 1) 
				cout << ones_of(sets[--x] & sets[--y]) << endl;
			else 
				cout << ones_of(sets[--x] | sets[--y]) << endl;
		}
	}
	return 0;
}