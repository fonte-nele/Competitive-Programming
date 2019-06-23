#include <iostream>

using namespace std;

int main() 
{
    long long int num1, num2, soma = 0;

    cin >> num1 >> num2;
    
    soma = (num1 + num2)*(num2 - num1 + 1);
    cout << soma/2 << endl;

    return 0;
}