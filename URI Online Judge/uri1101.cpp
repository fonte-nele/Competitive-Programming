#include<iostream>
using namespace std;
int main()
{
	int M, N, maior=0, menor=0, soma;

	do
	{
		soma=0;
		cin>>M>>N;

		if(M<=0 || N<=0)
		{
			break;
		}

		if(M>N) 
		{
			maior=M;
			menor=N;
		}
		else 
		{
			maior=N;
			menor=M;
		}

		for(menor; menor<=maior; menor++)
		{
			cout<<menor<<" ";
			soma+=menor;
		}
		cout<<"Sum="<<soma<<endl;

	} while(M>0 && N>0);
	return 0;
}