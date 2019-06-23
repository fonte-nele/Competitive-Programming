#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, a[9], b1, b2;
    string cpf;

    while(cin >> cpf)
    {
        for(i = 0; i < 9; i++)
            a[i] = cpf[i] - '0';

        b1 = (a[0]*1 + a[1]*2 + a[2]*3 + a[3]*4 + a[4]*5 + a[5]*6 + a[6]*7 + a[7]*8 + a[8]*9) % 11;
        b2 = (a[0]*9 + a[1]*8 + a[2]*7 + a[3]*6 + a[4]*5 + a[5]*4 + a[6]*3 + a[7]*2 + a[8]*1) % 11;
        if(b1 == 10)
            b1 = 0;
        if(b2 == 10)
            b2 = 0;
        //cout << b1 << endl;
        //cout << b2 << endl;

        cout << a[0] << a[1] << a[2] << '.' << a[3] << a[4] << a[5] << '.' << a[6] << a[7] << a[8] << '-' << b1 << b2 << endl;
    }
    return 0;
}