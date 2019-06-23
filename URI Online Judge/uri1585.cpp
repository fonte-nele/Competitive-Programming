#include <iostream>
using namespace std;

int main () 
{
    int base1, base2, quant, i;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cin >> base1 >> base2;

        cout << (base1 * base2) / 2 << " cm2" << endl;
    }
    
    return 0;
}