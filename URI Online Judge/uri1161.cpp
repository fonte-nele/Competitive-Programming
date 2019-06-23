#include <iostream>
using namespace std;

long long int fat(long long int);

int main () 
{
    long long int num1, num2, valor1, valor2;

    while(cin >> num1 >> num2)
    {
        valor1 = fat(num1);
        valor2 = fat(num2);
        cout << valor1 + valor2 << endl;
    }

    return 0;
}

long long int fat(long long int num)
{
    long long int i, fat = 1;

    for(i = 1; i <= num; i++)
    {
        fat *= i;
    }
    return fat;
}