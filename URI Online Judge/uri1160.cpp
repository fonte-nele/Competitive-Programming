#include<iostream>
using namespace std;
int main()
{
	double g1,g2;
	long int p1,p2;
	int n,i,cont=0,porc1,porc2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p1>>p2>>g1>>g2;
		while(p1<=p2)
		{
			porc1= ((double)p1/100)*g1;
			porc2= ((double)p2/100)*g2;
			p1+=porc1;
			p2+=porc2;
			cont++;
			if(cont>100)
			{
				cout<<"Mais de 1 seculo."<<endl;
				break;
			}
		}
		if(cont<=100)
		{
			cout<<cont<<" anos."<<endl;
		}
		cont=0;
	}
	return 0;
}