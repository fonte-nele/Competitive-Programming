#include <bits/stdc++.h>
using namespace std;


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char P1[400], P2[400], P3[400], P4[400], saida[400];
    int f, l, x;

    scanf ("%s %s %s %s", P1, P2, P3, P4);

    x = strlen (P1) - 1;

    f= ((P1[0] - '0') * 1000) + ((P2[0] - '0') * 100) + ((P3[0] - '0') * 10) + ((P4[0] - '0'));
    l= ((P1[x] - '0') * 1000) + ((P2[x] - '0') * 100) + ((P3[x] - '0') * 10) + ((P4[x] - '0'));

    for (int i = 0; i < (x - 1); i++)
        saida[i] = ((f * (((P1[i + 1] - '0') * 1000) + ((P2[i + 1]-'0') * 100) + ((P3[i + 1] - '0') * 10) + ((P4[i + 1] - '0')))) + l) % 257;
  
    saida[x - 1]='\0';
    cout << saida << endl;

    return 0;
}