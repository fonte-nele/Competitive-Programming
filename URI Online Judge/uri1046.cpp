#include<iostream>
using namespace std;
int main()
{
	int inicio,fim,total;
	cin>>inicio>>fim;
	if(inicio<fim)
	{
		total = fim-inicio;
		cout<<"O JOGO DUROU "<<total<<" HORA(S)"<<endl;
	}
	else
	{
		if(inicio>fim)
		{
			total = (24-inicio)+fim;
			cout<<"O JOGO DUROU "<<total<<" HORA(S)"<<endl;
		}
		else
		{
			cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
		}
	}
	return 0;
}