#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam;
    string nome;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
    	cin >> nome;

    	tam = nome.size();
    	if(tam == 3)
    	{
    		if(nome[0] == 'O' && nome[1] == 'B')
    		{
    			if(i != quant-1)
    			{
    				cout << "OBI" << " ";
    			}
    			else
    			{
    				cout << "OBI";
    			}
    		}
    		else if(nome[0] == 'U' && nome[1] == 'R')
    		{
    			if(i != quant-1)
    			{
    				cout << "URI" << " ";
    			}
    			else
    			{
    				cout << "URI";
    			}
    		}
    		else
    		{
    			if(i != quant-1)
    			{
    				cout << nome << " ";
    			}
    			else
    			{
    				cout << nome;
    			}
    		}
    	}
    	else
    	{
    		if(i != quant-1)
    		{
    			cout << nome << " ";
    		}
    		else
    		{
    			cout << nome;
    		}
    	}
    }
    cout << endl;

    return 0;
}
