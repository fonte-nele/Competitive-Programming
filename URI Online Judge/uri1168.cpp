#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam, soma = 0;
    string led;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cin >> led;

        tam = led.size();
        for(j = 0; j < tam; j++)
        {
            if(led[j] == '1')
                soma += 2;
            else if(led[j] == '2' || led[j] == '3' || led[j] == '5')
                soma += 5;
            else if(led[j] == '4')
                soma += 4;
            else if(led[j] == '6' || led[j] == '9' || led[j] == '0')
                soma += 6;
            else if(led[j] == '7')
                soma += 3;
            else if(led[j] == '8')
                soma += 7;
        }
        cout << soma << " leds" << endl;
        soma = 0;
    }
    return 0;
}