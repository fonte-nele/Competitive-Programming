#include <iostream>
using namespace std;

int main () 
{
    int i, j, quant, dado[6];
    bool flag[7];

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        for(j = 0; j < 7; j++)
        {
            flag[j] = false;
        }
        flag[0] = true;
        for(j = 0; j < 6; j++)
        {
            cin >> dado[j];
        }
        for(j = 0; j < 6; j++)
        {
            if(dado[j] < 1 || dado[j] > 6)
            {
                flag[0] = false;
                break;
            }
            else
            {
            	switch(dado[j])
            	{
            		case 1:
            			flag[1] = true;
            			break;
            		case 2:
            			flag[2] = true;
            			break;
            		case 3:
            			flag[3] = true;
            			break;
            		case 4:
            			flag[4] = true;
            			break;
            		case 5:
            			flag[5] = true;
            			break;
            		case 6:
            			flag[6] = true;
            			break;
            	}
            }
        }
        if(flag[0] && flag[1] && flag[2] && flag[3] && flag[4] && flag[5] && flag[6])
        {
            if((dado[0] + dado[5]) == 7 && (dado[1] + dado[3]) == 7 && (dado[2] + dado[4]) == 7)
            {
                cout << "SIM" << endl;
            }
            else
            {
                cout << "NAO" << endl;
            }
        }
        else
        {
            cout << "NAO" << endl;
        }   
    }

    return 0;
}