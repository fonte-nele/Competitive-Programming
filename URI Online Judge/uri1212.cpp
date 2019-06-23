#include <iostream>
using namespace std;

int main() 
{
    unsigned long long int m, n;
    while(cin >> m >> n) 
    {
        if(m == 0 && n == 0)
        {
            break;
        }
        unsigned long long int op = 0;
        unsigned long long int c = 0;
        while(n || m) 
        {
            c = (c + (n%10) + (m%10)) / 10;
            op += c;
            n /= 10;
            m /= 10;
        }
        if(!op)
        {
            cout << "No carry operation." << endl;
        }
        else if (op >1)
        {
            cout << op << " carry operations." << endl;
        }
        else
        { 
            cout << op << " carry operation." << endl;
        }
    }
    return 0;
}