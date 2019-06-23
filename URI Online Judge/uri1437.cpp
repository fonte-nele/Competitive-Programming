#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, n, tam;
    string linha;
    while(cin >> n) 
    {
        if(n == 0)
        	break;
        cin >> linha;
        int pos = 1;
        tam = linha.size();
        for(i = 0; i < tam; i++) 
        {
            if(linha[i] == 'D') 
            	pos++;
            else if(linha[i] == 'E') 
            	pos--;
        }
        while (pos < 1) 
        	pos += 4;
        while (pos > 4) 
        	pos -= 4;
        if (pos == 1) 
        	cout << 'N' << endl;
        else if (pos == 2) 
        	cout << 'L' << endl;
        else if (pos == 3) 
        	cout << 'S' << endl;
        else if (pos == 4)
        	cout << 'O' << endl;
    }
    return 0;
}