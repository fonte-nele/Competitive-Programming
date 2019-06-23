#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    string pal;

    while(getline(cin, pal))
    {
        for(i = 0; i < (int)pal.size(); i++)
        {
            if(pal[i] >= '0' && pal[i] <= '9')
                cout << pal[i];
            else if(pal[i] == '*' || pal[i] == '#')
                cout << pal[i];
            else if(toupper(pal[i]) == 'A' || toupper(pal[i]) == 'B' || toupper(pal[i]) == 'C')
                cout << 2 ;
            else if(toupper(pal[i]) == 'D' || toupper(pal[i]) == 'E' || toupper(pal[i]) == 'F')
                cout << 3 ;
            else if(toupper(pal[i]) == 'G' || toupper(pal[i]) == 'H' || toupper(pal[i]) == 'I')
                cout << 4 ;
            else if(toupper(pal[i]) == 'J' || toupper(pal[i]) == 'K' || toupper(pal[i]) == 'L')
                cout << 5 ;
            else if(toupper(pal[i]) == 'M' || toupper(pal[i]) == 'N' || toupper(pal[i]) == 'O')
                cout << 6 ;
            else if(toupper(pal[i]) == 'P' || toupper(pal[i]) == 'Q' || toupper(pal[i]) == 'R' || toupper(pal[i]) == 'S')
                cout << 7 ;
            else if(toupper(pal[i]) == 'T' || toupper(pal[i]) == 'U' || toupper(pal[i]) == 'V')
                cout << 8 ;
            else if(toupper(pal[i]) == 'W' || toupper(pal[i]) == 'X' || toupper(pal[i]) == 'Y' || toupper(pal[i]) == 'Z')
                cout << 9 ;
        }
        cout << endl;
    }

    return 0;
}
