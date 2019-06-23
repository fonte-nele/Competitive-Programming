#include <bits/stdc++.h>
using namespace std;

int main () 
{
	int i, j, n;
	cin >> n;

	for(i = 0; i < n; i++) 
	{
		int k;
		cin >> k;
		int m[k];
		for(j = 0; j < k; j++) 
		{
		    cin >> m[j];
		}
		cout << "Case " << i+1 << ": " << m[k/2] << endl;
	}
    return 0;
}