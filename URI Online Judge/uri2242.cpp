#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, tam, pos = 0, flag = 1;
    string risada, result;

    cin >> risada;
    tam = risada.size();

    for(i = 0; i < tam; i++)
    {
    	if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u')
    	{
    		result[pos] = risada[i];
    		pos++;
    	}
    }

    for(i = 0, j = pos-1; i < (pos/2); i++,j--)
    {
    	if(result[i] != result[j])
    	{
    		flag = 0;
    	}
    }
    if(flag)
    	cout << "S" << endl;
    else
    	cout << "N" << endl;
   
    
    return 0;
}