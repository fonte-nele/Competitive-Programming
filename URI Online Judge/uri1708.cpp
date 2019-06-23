#include <iostream>
using namespace std;

int main () 
{
    int volta;
    int rapido, devagar;

    cin >> rapido >> devagar;
    for(int i = 1; i < 10000; i++) 
    {
        int f = rapido * i;
        int s = devagar * i;
        if (s - f >= rapido) 
        {
            volta = i + 1;
            break;
        }
    }
    cout << volta << endl;
  
    return 0;
}