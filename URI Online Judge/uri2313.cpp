#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    
    if(a < (b+c) && b < (a+c) && c < (a+b))
    {
        if(a==b && b==c)
        {
            cout<<"Valido-Equilatero"<<endl;
            if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
                cout << "Retangulo: S" <<endl;
            else
            	cout << "Retangulo: N" <<endl;
        }
        else
        {
        	if(a!=b && a!=c && b!=c)
	        {
	            cout<<"Valido-Escaleno"<<endl;
	            if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
	                cout << "Retangulo: S" <<endl;
	            else
	            	cout << "Retangulo: N" <<endl;
	        }
	        else
	        {
	        	if(a==b || a==c || b==c)
		        {
		            cout<<"Valido-Isoceles"<<endl;
		            if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
		                cout << "Retangulo: S" <<endl;
		            else
		            	cout << "Retangulo: N" <<endl;
		        }
	        }
        }        
    }
    else
    {
        cout << "Invalido" << endl;
    }
    return 0;
}