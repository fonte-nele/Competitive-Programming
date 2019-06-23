#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w1, w2, r;
    double m1, m2, m;

    while(cin >> w1 >> w2 >> r && (w1 != 0 && w2 != 0 && r != 0))
    {
        m1 = (double)w1*(1+ (double)r/30);
        m2 = (double)w2*(1+ (double)r/30);

        //cout << m1 << endl;
        //cout << m2 << endl;

        m = (m1 + m2)/2;

        //cout << m << "ad" << endl;
        if(m < 13)
            cout << "Nao vai da nao" << endl;
        else if(m < 14)
            cout << "E 13" << endl;
        else if(m < 40)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if(m <= 60)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else
            cout << "AQUI E BODYBUILDER!!" << endl;
    }
    cout << endl << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;

    return 0;
}