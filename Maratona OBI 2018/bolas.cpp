#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int cont = 1, maior = 0, num;
	vector<int> v(8);

	for(int i=0; i < 8; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	num = v[0];
	for(int i=1; i < 8; i++)
	{
		if(v[i] == num)
			cont++;
		else
		{
			if(maior < cont)
				maior = cont;
			cont = 1;
			num = v[i];
		}
	}
	if(maior < cont)
		maior = cont;
	//cout << maior << endl;

	if(maior > 4)
		cout << 'N' << endl;
	else
		cout << 'S' << endl; 

	return 0;
}
