#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int tam, quant, i, cont1, cont2;
    string num;
        
    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cin >> num;
        tam = num.size();

        if(tam > 3)
        {
            cout << 3 << endl;
        }
        else
        {
            cont1 = 0;
            cont2 = 0;
            
            if(num[0] == 'o')
                cont1++;
            else
                if(num[0] == 't')
                    cont2++;

            if(num[1] == 'n')
                cont1++;
            else
                if(num[1] == 'w')
                    cont2++;

            if(num[2] == 'e')
                cont1++;
            else
                if(num[1] == 'o')
                    cont2++;   

            if(cont1 > cont2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}