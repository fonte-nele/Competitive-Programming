#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n1,n2,n3,n4,media1,nota_exame,total;
	cin>>n1>>n2>>n3>>n4;
	media1 = (n1*2+n2*3+n3*4+n4*1)/10;
	if(media1>=7)
	{
		cout<<"Media: "<<fixed<<setprecision(1)<<media1<<endl;
		cout<<"Aluno aprovado."<<endl;
	}
	else
	{
		if(media1<5)
		{
			cout<<"Media: "<<fixed<<setprecision(1)<<media1<<endl;
			cout<<"Aluno reprovado."<<endl;
		}
		else
		{
			cin>>nota_exame;
			total = (nota_exame+media1)/2;
			if(total>=5)
			{
				cout<<"Media: "<<fixed<<setprecision(1)<<media1<<endl;
				cout<<"Aluno em exame."<<endl;
				cout<<"Nota do exame: "<<fixed<<setprecision(1)<<nota_exame<<endl;
				cout<<"Aluno aprovado."<<endl;
				cout<<"Media final: "<<fixed<<setprecision(1)<<total<<endl;
			}
			else
			{
				cout<<"Media: "<<fixed<<setprecision(1)<<media1<<endl;
				cout<<"Aluno em exame."<<endl;
				cout<<"Nota do exame: "<<fixed<<setprecision(1)<<nota_exame<<endl;
				cout<<"Aluno reprovado."<<endl;
				cout<<"Media final: "<<fixed<<setprecision(1)<<total<<endl;
			}
		}
	}
	return 0;
}