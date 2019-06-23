#include<iostream>
using namespace std;
int main()
{
	int A,B,C,dif,dif2;
	cin>>A>>B>>C;
	if(A>B)
	{
		dif = A-B;
		dif2 = B-C;
		if(B<=C)
		{
			cout<<":)"<<endl;
		}
		if(B>C && dif>dif2)
		{
			cout<<":)"<<endl;
		}
		if(B>C && dif<=dif2)
		{
			cout<<":("<<endl;
		}
	}
	if(A<B)
	{
		dif = B-A;
		dif2 = C-B;
		if(B>=C)
		{
			cout<<":("<<endl;
		}
		if(B<C && dif>dif2)
		{
			cout<<":("<<endl;
		}
		if(B<C && dif<=dif2)
		{
			cout<<":)"<<endl;
		}
	}
	if(A==B)
	{
		if(B<C)
		{
			cout<<":)"<<endl;
		}
		else
		{
			cout<<":("<<endl;
		}
	}
	
	return 0;
}