#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);

	double sum = 0.0;
	vector<int> votes(n);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &votes[i]);
		sum += votes[i];
	}

	vector<double> percent(n);

	for (int i = 0; i < n; i++) 
	{
		percent[i] = votes[i] / sum;
	}

	sort(percent.rbegin(), percent.rend());

	if (percent[0] >= 0.45) printf("1\n");
	else if (percent[0] >= 0.40 and percent[0] >= percent[1] + 0.1) printf("1\n");
	else printf("2\n");

	return 0;
}