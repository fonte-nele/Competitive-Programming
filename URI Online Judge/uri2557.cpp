#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void calcula(string num1, string num2, string result)
{
	long long int n1, n2, res;
	if(num1[0] == 'R')
	{
		n2 = atoi(num2.c_str());
		res = atoi(result.c_str());
		cout << res - n2 << endl;
	}
	else
	{
		if(num2[0] == 'L')
		{
			n1 = atoi(num1.c_str());
			res = atoi(result.c_str());
			cout << res - n1 << endl;
		}
		else
		{
			n1 = atoi(num1.c_str());
			n2 = atoi(num2.c_str());
			cout << n1 + n2 << endl;
		}
	}
}

int main () 
{
    int j, tam, pos = 0;
    string linha, num1, num2, result;

    while(cin >> linha)
    {
    	tam = linha.size();
    	for(j = 0; j < tam; j++)
    	{
    		if(linha[j] == '+')
    		{
    			num1 = linha.substr(pos, j-pos);
    			pos = j+1;
    		}
    		if(linha[j] == '=')
    		{
    			num2 = linha.substr(pos, j-pos);
    			pos = j+1;
       		}
    	}
    	result = linha.substr(pos,j);

    	calcula(num1, num2, result);
  		pos = 0;
    }

    return 0;
}