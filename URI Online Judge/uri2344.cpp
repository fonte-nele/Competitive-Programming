#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nota;

    cin >> nota;

    if (nota == 0)
        cout << "E" << endl;
    else if(nota <= 35)
        cout << "D" << endl;
    else if(nota <= 60)
        cout << "C" << endl;
    else if(nota <= 85)
        cout << "B" << endl;
    else if(nota <= 100)
        cout << "A" << endl;

    return 0;
}
