#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int f = 3; f * f <= n; f += 2) {
        if (n % f == 0) return false;
    }

    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(scanf("%d", &n) == 1) 
    {
        if(is_prime(n))
        {
            bool super = true;
            while (n > 0) 
            {
                int d = n % 10;
                n /= 10;

                if (d != 2 and d != 3 and d != 5 and d != 7) 
                {
                    super = false;
                    break;
                }
            }
            if(super) printf("Super\n");
            else printf("Primo\n");
        }
        else 
        {
            printf("Nada\n");
        }
    }
}