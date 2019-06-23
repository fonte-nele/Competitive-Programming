#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
	bool tenta1,tenta2,tenta3,tenta4;
    tenta1 = (abs(b-c) < a && a < (b+c)) || (abs(a-c) < b && b < (a+c)) || (abs(a-b) < c && c < (a+b)); // a b c
    tenta2 = (abs(c-d) < b && b < (c+d)) || (abs(b-d) < c && c < (b+d)) || (abs(b-c) < d && d < (b+c)); // b c d
    tenta3 = (abs(c-d) < a && a < (c+d)) || (abs(a-d) < c && c < (a+d)) || (abs(a-c) < d && d < (a+c)); // a c d
    tenta4 = (abs(b-d) < a && a < (b+d)) || (abs(a-d) < b && b < (a+d)) || (abs(a-b) < d && d < (a+b)); // a b d
        
    if (tenta1 || tenta2 || tenta3 || tenta4)
	{
        cout<<"S"<<endl;
    }
    else 
	{
		cout<<"N"<<endl;
    }

    return 0;
}