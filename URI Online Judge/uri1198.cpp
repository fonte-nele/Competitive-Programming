#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    long long int num1, num2;

    while(cin >> num1 >> num2)
    {
        cout << abs(num1 - num2) << endl;
    }

    return 0;
}