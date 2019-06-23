#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, num, flag;
    
    cin >> quant;

   	for(i = 0; i < quant; i++)
   	{
   		cin >> num;
   		string linha[num];
   		flag = 1;
   		for(j = 0; j < num; j++)
   		{
   			cin >> linha[j];
   		}
   		for(j = 0; j < num; j++)
   		{
   			if(linha[0] != linha[j])
   			{
   				flag = 0;
   			}
   		}
   		if(flag)
   		{
   			cout << linha[0] << endl;
   		}
   		else
   		{
   			cout << "ingles" << endl;
   		}
   	}
    return 0;
}