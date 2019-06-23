#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, m, s;
    double num;

    while (cin >> num)
    {
        // 24*60*60/360 = 240
        int total = num * 240.0;
        h = total/3600;
        total %= 3600;
        m = total/60;
        total %= 60;
        s = total;
        if(num < 90.0 || num == 360.0)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if(num < 180.0)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if(num < 270.0)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if(num < 360.0)
        {
            cout << "De Madrugada!!" << endl;
        }
        cout << setfill('0') << setw(2) << (h + 6) % 24 << ':';
        cout << setfill('0') << setw(2) << m << ':';
        cout << setfill('0') << setw(2) << s << endl;
    }

    return 0;
}
