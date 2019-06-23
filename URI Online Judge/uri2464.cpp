#include <bits/stdc++.h>
using namespace std;

const int N = 1e4+10;

char chr, s[N], m[N];

int main () 
{
    scanf("%s%c", s, &chr);
    for (int i = 0; i < 26; i++) m[i+'a'] = s[i];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) printf("%c", m[s[i]]); printf("\n");
    return 0;
}