#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, num, ant, quant1, maior = 0;

    cin >> quant;

    cin >> num;
    ant = num;
    quant1 = 1;
    for(int i=0; i < quant-1; i++)
    {
        cin >> num;
        if(num == ant)
        {
            quant1++;
            if(quant1 > maior)
                maior = quant1;
        }
        else
            quant1 = 1;
        ant = num;
    }
    cout << maior << endl;

    return 0;
}