#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int op=1,cont=0,p1,p2,inter=0,gre=0,emp=0;
	while(op!=2)
	{
		cin>>p1;
		cin>>p2;
		if(p1>p2)
		{
			inter++;
		}
		else
		{
			if(p2>p1)
			{
				gre++;
			}
			else
			{
				emp++;
			}
		}
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>op;
		while(op!=1 && op!=2)
		{
			cout<<"Novo grenal (1-sim 2-nao)"<<endl;
			cin>>op;
		}
		cont++;
	}
	cout<<cont<<" grenais"<<endl;
	cout<<"Inter:"<<inter<<endl;
	cout<<"Gremio:"<<gre<<endl;
	cout<<"Empates:"<<emp<<endl;
	if(inter>gre)
	{
		cout<<"Inter venceu mais"<<endl;
	}
	else
	{
		if(inter<gre)
		{
			cout<<"Gremio venceu mais"<<endl;
		}
		else
		{
			cout<<"Nao houve vencedor"<<endl;
		}
	}
	return 0;
}