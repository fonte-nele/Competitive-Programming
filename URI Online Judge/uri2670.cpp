#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int a, b, c, tempo1, tempo2, tempo3;
	cin >> a >> b >> c;
	
	tempo1 = 2 * b + 4*c;
	tempo2 = 2 * a + 2*c;
	tempo3 = 4 * a + 2*b;
	
	if(tempo1 <= tempo2 && tempo1 <= tempo3)
		cout << tempo1 << endl;
	else if(tempo2 <= tempo1 && tempo2 <= tempo3)
		cout << tempo2 << endl;
	else if(tempo3 <= tempo1 && tempo3 <= tempo2)
		cout << tempo3 << endl;	
	
	return 0;
}
