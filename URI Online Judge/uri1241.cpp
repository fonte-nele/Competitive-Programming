#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam1, tam2, flag;
    string num1, num2;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
    	flag = 1;
    	cin >> num1 >> num2;

    	tam1 = num2.size();
    	tam2 = num1.size();
    	for(j = 0; j < tam1; j++)
    	{
    		if(num1[tam2-tam1+j] != num2[j])
    			flag = 0;
    	}

    	if(flag)
    		cout << "encaixa" << endl;
    	else
    		cout << "nao encaixa" << endl;
    }
    
    
    return 0;
}