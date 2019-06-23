#include <iostream>
#include <cmath>
using namespace std;

char chr;
int n1, d1, n2, d2, nr, dr;
void sum() 
{
	nr = n1*d2 + n2*d1; 
	dr = d1*d2;
}

void diff() 
{
	nr = n1*d2 - n2*d1; 
	dr = d1*d2;
}

void mult() 
{
	nr = n1*n2; 
	dr = d1*d2;
}

void div() 
{
	nr = n1*d2; 
	dr = n2*d1;
}

int mdc(int a, int b) 
{
	if(b > a)
	{
		return mdc(b,a);
	}
	else if(a % b == 0)
	{
		return abs(b);
	}
	else
	{
		return mdc(b, a%b);
	}
    
    //Outra forma!
    //return (b > a) ? mdc(b, a) : ((a % b == 0) ? abs(b) : mdc(b, a%b));
}

int main () 
{
    int i, n;
    char aux;
    cin >> n;
    
    for(i = 0; i < n; i++) 
    {
        char op;
        cin >> n1 >> aux >> d1 >> op >> n2 >> aux >> d2;

        if(op == '+') 
        	sum();
        else if(op == '-') 
        	diff();
        else if(op == '*') 
        	mult();
        else if(op == '/') 
        	div();
        if (nr > 0 and dr < 0) nr = -nr, dr = -dr;
        
        cout << nr << '/' << dr << " = " << nr/mdc(nr,dr) << '/' << dr/mdc(nr, dr) << endl;
    }
    return 0;
}