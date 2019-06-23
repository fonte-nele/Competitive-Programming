#include <iostream>
using namespace std;

int main () 
{
    int i, j, quant, casos, op;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cin >> casos;

        for(j = 0; j < casos; j++)
        {
            cin >> op;
            switch(op)
            {
                case 1:
                    cout << "Rolien" << endl;
                    break;
                case 2:
                    cout << "Naej" << endl;
                    break;
                case 3:
                    cout << "Elehcim" << endl;
                    break;
                case 4:
                    cout << "Odranoel" << endl;
                    break;
            }
        }
    }
    
    return 0;
}