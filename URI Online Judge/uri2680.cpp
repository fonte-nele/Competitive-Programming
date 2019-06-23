#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    scanf("%d", &q);

    while (q--) 
    {
        int n;
        scanf("%d", &n);

        if (n == 1) 
        {
            printf("1\n");
            continue;
        }

        int sum = n + 1;
        for (int d = 2; d * d <= n; d++) 
        {
            if (n % d == 0) 
            {
                sum += d;
                sum += (n / d) * (d * d != n);
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}