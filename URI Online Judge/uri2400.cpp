#include <iostream>
using namespace std;

#define TAM_MAX 101000

int arvore[TAM_MAX];

void upd(int idx, int val)
{
	while(idx < TAM_MAX)
	{
		arvore[idx] += val;
		idx += idx&(-idx);
	}
}

int read(int idx)
{
	int ret = 0;
	while(idx > 0)
	{
		ret += arvore[idx];
		idx -= idx&(-idx);
	}
	return ret;
}

int main()
{
	int n, i, vi, resp = 0;

	for(i = 0; i < TAM_MAX; ++i)
	{
		arvore[i]=0;
	}

	cin >> n;

	for(i = 0; i < n; ++i)
	{
		cin >> vi;
		resp += i - read(vi);
		upd(vi,1);
	}

	cout << resp << endl;
	return 0;
}