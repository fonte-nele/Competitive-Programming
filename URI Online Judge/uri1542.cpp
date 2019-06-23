#include <iostream>
using namespace std;

int main () 
{
	int a, b, c;
    while(cin >> a && a != 0) 
    {
        if(a == 0) 
        	break;
        cin >> b >> c;
        int result = a*b*c/(c-a);
        if(result == 1)
            cout << "1 pagina" << endl;
        else
            cout << result << " paginas" << endl;
    }
    return 0;
}