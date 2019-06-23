#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, result = 0;
    char s[1000000];
    cin >> s;

    for(int i = 0; s[i] != '\0';i++)
    {
        num = s[i] - '0';
        result += num;
    }
    cout << result % 3 << endl;

    return 0;
}