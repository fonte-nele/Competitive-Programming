#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant;
    string placa;
    cin >> quant;

    for(i = 0; i < quant; i++)
    {
        cin >> placa;
        if((placa[0] < 'A' || placa[0] > 'Z') || (placa[1] < 'A' || placa[1] > 'Z') || (placa[2] < 'A' || placa[2] > 'Z') || placa[3] != '-')
        {
            cout << "FAILURE" << endl;
        }
        else
        {
            int tam = placa.size();
            if(tam != 8)
                cout << "FAILURE" << endl;
            else
            {
                if((placa[4] < '0' || placa[4] > '9') || (placa[5] < '0' || placa[5] > '9') || (placa[6] < '0' || placa[6] > '9') || (placa[7] < '0' || placa[7] > '9'))
                    cout << "FAILURE" << endl;
                else if(placa[7] == '1' || placa[7] == '2')
                    cout << "MONDAY" << endl;
                else if(placa[7] == '3' || placa[7] == '4')
                    cout << "TUESDAY" << endl;
                else if(placa[7] == '5' || placa[7] == '6')
                    cout << "WEDNESDAY" << endl;
                else if(placa[7] == '7' || placa[7] == '8')
                    cout << "THURSDAY" << endl;
                else if(placa[7] == '9' || placa[7] == '0')
                    cout << "FRIDAY" << endl;
            }
        }
    }
    return 0;
}