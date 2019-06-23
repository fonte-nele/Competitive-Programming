#include <cstdio>

int getValue(int n) 
{
    switch (n) 
    {
        case 4: return 0;
        case 5: return 1;
        case 6: return 2;
        case 7: return 3;
        case 12: return 4;
        case 11: return 5;
        case 13: return 6;
        case 1: return 7;
        case 2: return 8;
        case 3: return 9;
    }
}

bool wins(int a, int b) 
{
    return getValue(a) >= getValue(b);
}

int main() 
{
    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 0;

    while (n--) 
    {
        int _a = 0;
        int _b = 0;

        int p, q, r;
        int x, y, z;

        scanf("%d %d %d %d %d %d", &p, &q, &r, &x, &y, &z);

        if (wins(p, x)) _a++; else _b++;
        if (wins(q, y)) _a++; else _b++;
        if (wins(r, z)) _a++; else _b++;

        if (_a > _b) a++;
        else b++;
    }

    printf("%d %d\n", a, b);
    return 0;
}