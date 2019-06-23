#include<iostream>
using namespace std;
int main()
{
	int inicio,min_inicio,fim,min_fim,total,total2;
	cin>>inicio>>min_inicio>>fim>>min_fim;
	if(min_fim<min_inicio)
	{
		if(fim>inicio)
		{
			total = (fim-inicio)-1;
			total2 = (60+min_fim)-min_inicio;
			cout<<"O JOGO DUROU "<<total<<" HORA(S) E "<<total2<<" MINUTO(S)"<<endl;
		}
		else
		{
			total = ((24-inicio)+fim)-1;
			total2 = (60+min_fim)-min_inicio;
			cout<<"O JOGO DUROU "<<total<<" HORA(S) E "<<total2<<" MINUTO(S)"<<endl;
		}
	}
	else
	{
		if(min_fim>min_inicio)
		{
			if(fim>inicio)
			{
				total = fim-inicio;
				total2 = min_fim-min_inicio;
				cout<<"O JOGO DUROU "<<total<<" HORA(S) E "<<total2<<" MINUTO(S)"<<endl;
			}
			else
			{
				total = ((24-inicio)+fim)-1;
				total2 = min_fim-min_inicio;
				cout<<"O JOGO DUROU "<<total<<" HORA(S) E "<<total2<<" MINUTO(S)"<<endl;
			}
			
		}
		else
		{
			if(min_inicio==min_fim)
			{
				cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
			}
		}
	}
	return 0;
}