#include<iostream>
using namespace std;
int main()
{
	int num,temp1,temp2,temp3,temp4;
	cin>>num;
	while(num<1 || num>999)
	{
		cin>>num;
	}
	if(num<10)
	{
		if(num==1)
		{
			cout<<"I";
		}
		else
		{
			if(num==2)
				cout<<"II";
			else
				if(num==3)
					cout<<"III";
				else
					if(num==4)
						cout<<"IV";
					else
						if(num==5)
							cout<<"V";
						else
							if(num==6)
								cout<<"VI";
							else
								if(num==7)
									cout<<"VII";
								else
									if(num==8)
										cout<<"VIII";
									else
										if(num==9)
											cout<<"IX";
		}
	}
	else
	{
		if(num<100)
		{
			temp1=num%10;
			temp2=num/10;
			if(temp2==1)
			{
				cout<<"X";
			}
			else
			{
				if(temp2==2)
					cout<<"XX";
				else
					if(temp2==3)
						cout<<"XXX";
					else
						if(temp2==4)
							cout<<"XL";
						else
							if(temp2==5)
								cout<<"L";
							else
								if(temp2==6)
									cout<<"LX";
								else
									if(temp2==7)
										cout<<"LXX";
									else
										if(temp2==8)
											cout<<"LXXX";
										else
											if(temp2==9)
												cout<<"XC";
			}
			if(temp1==1)
			{
				cout<<"I";
			}
			else
			{
				if(temp1==2)
					cout<<"II";
				else
					if(temp1==3)
						cout<<"III";
					else
						if(temp1==4)
							cout<<"IV";
						else
							if(temp1==5)
								cout<<"V";
							else
								if(temp1==6)
									cout<<"VI";
								else
									if(temp1==7)
										cout<<"VII";
									else
										if(temp1==8)
											cout<<"VIII";
										else
											if(temp1==9)
												cout<<"IX";
			}
		}
		else
		{
			temp1=num%10;
			temp2=temp1%10;
			temp4=num/100;
			temp3=(num/10)%10;
			if(temp4==1)
			{
				cout<<"C";
			}
			else
			{
				if(temp4==2)
					cout<<"CC";
				else
					if(temp4==3)
						cout<<"CCC";
					else
						if(temp4==4)
							cout<<"CD";
						else
							if(temp4==5)
								cout<<"D";
							else
								if(temp4==6)
									cout<<"DC";
								else
									if(temp4==7)
										cout<<"DCC";
									else
										if(temp4==8)
											cout<<"DCCC";
										else
											if(temp4==9)
												cout<<"CM";
			}
			if(temp3==1)
			{
				cout<<"X";
			}
			else
			{
				if(temp3==2)
					cout<<"XX";
				else
					if(temp3==3)
						cout<<"XXX";
					else
						if(temp3==4)
							cout<<"XL";
						else
							if(temp3==5)
								cout<<"L";
							else
								if(temp3==6)
									cout<<"LX";
								else
									if(temp3==7)
										cout<<"LXX";
									else
										if(temp3==8)
											cout<<"LXXX";
										else
											if(temp3==9)
												cout<<"XC";
			}
			if(temp2==1)
			{
				cout<<"I";
			}
			else
			{
				if(temp2==2)
					cout<<"II";
				else
					if(temp2==3)
						cout<<"III";
					else
						if(temp2==4)
							cout<<"IV";
						else
							if(temp2==5)
								cout<<"V";
							else
								if(temp2==6)
									cout<<"VI";
								else
									if(temp2==7)
										cout<<"VII";
									else
										if(temp2==8)
											cout<<"VIII";
										else
											if(temp2==9)
												cout<<"IX";
			}
		}
	}
	cout<<endl;
	return 0;
}
