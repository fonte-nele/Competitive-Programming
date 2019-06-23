#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int v[6], j, i, num, cont = 0;

    for(i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    for(i = 0; i < 6; i++)
    {
        cin >> num;
        for(j = 0; j < 6; j++)
        {
            if(num == v[j])
            {
                cont++;
            }
        }
    }
    if(cont == 3)
        cout << "terno" << endl;
    else if(cont == 4)
        cout << "quadra" << endl;
    else if(cont == 5)
        cout << "quina" << endl;
    else if(cont == 6)
        cout << "sena" << endl;
    else
        cout << "azar" << endl;

    return 0;
}