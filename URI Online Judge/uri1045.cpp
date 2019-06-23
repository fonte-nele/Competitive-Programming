#include<iostream>
using namespace std;
int main()
{
	double A,B,C,maior;
	cin>>A>>B>>C;
	if(C>A && C>B)
	{
		maior = C;
		C = A;
		A = maior;
	}
	if(B>A && B>C)
	{
		maior = B;
		B = A;
		A = maior;
	}
	if(A>=(B+C))
	{
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}
	else
	{
		if((A*A)==((B*B)+(C*C)))
		{
			cout<<"TRIANGULO RETANGULO"<<endl;
		}
		if((A*A)>((B*B)+(C*C)))
		{
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
		}
		if((A*A)<((B*B)+(C*C)))
		{
			cout<<"TRIANGULO ACUTANGULO"<<endl;
		}
		if(A==B && A==C)
		{
			cout<<"TRIANGULO EQUILATERO"<<endl;
		}
		if((A==B && A!=C) || (A!=B && A==C) || (B==A && B!=C) || (B!=A && B==C) || (C==A && C!=B) ||(C!=A &&C==B))
		{
			cout<<"TRIANGULO ISOSCELES"<<endl;
		}
	}
	return 0;
}