#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main () 
{
    int num1, num2, tam1, tam2, valor;
    char caracter;
    string n1, n2;

    cin >> n1 >> caracter >> n2;

    tam1 = n1.size();
    for(int i = 0; i < tam1; i++)
    {
    	if(n1[i] == '7')
    	{
    		n1[i] = '0';
    	}
    }

    tam2 = n2.size();
    for(int i = 0; i < tam2; i++)
    {
    	if(n2[i] == '7')
    	{
    		n2[i] = '0';
    	}
    }

    num1 = atoi(n1.c_str());
    num2 = atoi(n2.c_str());

    if(caracter == '+')
    {
    	valor = num1 + num2;
    }
    else
    {
    	valor = num1 * num2;
    }

    stringstream v1;
    v1 << valor;

    n1 = v1.str();
    tam1 = n1.size();
    for(int i = 0; i < tam1; i++)
    {
    	if(n1[i] == '7')
    		n1[i] = '0';
    }
    num1 = atoi(n1.c_str());
    cout << num1 << endl;
    return 0;
}