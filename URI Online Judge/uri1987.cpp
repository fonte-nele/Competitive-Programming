#include <iostream>
#include <string>
using namespace std;

int main()
{
	int quant, num, soma;
	string curso;

	while(cin >> quant >> num)
	{
		soma = 0;
        while (num > 0) soma += num % 10, num /= 10;
        cout << soma << ' ' << (!(soma%3) ? "sim" : "nao") << endl;
	}
	return 0;
}