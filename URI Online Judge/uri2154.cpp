#include <bits/stdc++.h>
using namespace std;
#define f(valor, tam) for(int i = valor; i < tam; i++)

int main()
{
    int grau;

    while(cin >> grau)
    {
        int coef, expo;
        char x;
        f(0, grau)
        {
            cin >> coef >> x >> expo;

            if(i != grau-1)
                cin >> x;

            cout << coef*expo << "x";
            if(expo-1 != 1)
                cout << expo-1;
            if(i != grau-1)
                cout << " + ";
            else
                cout << endl;
        }

    }
    return 0;
}