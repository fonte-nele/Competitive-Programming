#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main () 
{
    long long int num1, num2, tam, soma;
    string num;

    while(cin >> num1 >> num2 && num1 != 0 && num2 != 0)
    {
    	soma = num1 + num2;
    	stringstream v1;
	    v1 << soma;

	    num = v1.str();
	    tam = num.size();
	    for(int i = 0; i < tam; i++)
	    {
	    	if(num[i] != '0')
	    		cout << num[i];
	    }
	    cout << endl;
    }
    
    return 0;
}