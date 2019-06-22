#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num, result = 0;
	string s;
	cin >> s;

	for(int i = 0; s[i] != '\0';i++)
	{
		num = s[i] - '0';
		result += num;
	}
	cout << result % 3 << endl;

	return 0;
}