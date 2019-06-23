#include<iostream>
using namespace std;
int main()
{
	long int *mat,pos,cont=0;
	int i,n;
	double *nota,maior=0;
	cin>>n;
	mat = new long int [n];
	nota = new double [n];
	for(i=0;i<n;i++)
	{
		cin>>mat[i]>>nota[i];
		if(nota[i]>=8 && nota[i]>maior)
		{
			maior=nota[i];
			pos=mat[i];
			cont++;
		}
	}
	if(cont==0)
	{
		cout<<"Minimum note not reached"<<endl;
	}
	else
	{
		cout<<pos<<endl;
	}
	
	delete []mat;
	delete []nota;
	return 0;
}