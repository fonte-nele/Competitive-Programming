#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, n;
	scanf("%d", &n);

	double valor = 1.0;

	int x;
	char op;
	for(i = 0; i < n; i++) 
	{
		scanf("%d %c", &x, &op);

		if (op == '*') 
			valor *= x;
		else 
			valor /= x;
	}

	printf("%.0lf\n", valor);

	return 0;
}