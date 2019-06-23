#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cv, ce, cs, fv, fe, fs, pontosc, pontosf;

    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    pontosc = cv*3 + ce*1;
    pontosf = fv*3 + fe*1;

    if(pontosc > pontosf)
        cout << 'C' << endl;
    else if(pontosc < pontosf)
        cout << 'F' << endl;
    else if(cs > fs)
        cout << 'C' << endl;
    else if(cs < fs)
        cout << 'F' << endl;
    else
        cout << '=' << endl;

    return 0;
}
