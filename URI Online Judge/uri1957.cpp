#include <iostream>
using namespace std;

int main()
{
    int num, resto, cont=0, hex[10];
    cin >> num;
    resto = num;
    while(resto >= 16)
    {
    	resto /= 16;
    	hex[cont] = num - resto*16;
    	num = resto;
    	cont++;
    }
    hex[cont] = resto;

    for(int i=cont; i>=0; i--)
    {
    	switch(hex[i])
    	{
    		case 10:
    			cout << "A";
    			break;
    		case 11:
    			cout << "B";
    			break;
    		case 12:
    			cout << "C";
    			break;
    		case 13:
    			cout << "D";
    			break;
    		case 14:
    			cout << "E";
    			break;
    		case 15:
    			cout << "F";
    			break;
    		default:
    			cout << hex[i];
    			break;
    	}
    }
    cout << endl;

    return 0;
}