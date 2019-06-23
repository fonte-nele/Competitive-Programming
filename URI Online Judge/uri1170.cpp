#include <iostream>
using namespace std;


int main () 
{
    int i, quant, cont;
    float num;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cont = 0;
        cin >> num;

        while(num > 1)
        {
            num /= 2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }

    return 0;
}