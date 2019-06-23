#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,n;
	string p1,p2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p1>>p2;
		if(p1=="papel")
		{
			if(p2=="papel")
			{
				cout<<"Caso #"<<i+1<<": De novo!"<<endl;
			}
			else
			{
				if(p2=="pedra")
				{
					cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
				}
				else
				{
					if(p2=="tesoura")
					{
						cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
					}
					else
					{
						if(p2=="lagarto")
						{
							cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
						}
						else
						{
							cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
						}
					}
				}
			}
		}
		else
		{
			if(p1=="pedra")
			{
				if(p2=="pedra")
				{
					cout<<"Caso #"<<i+1<<": De novo!"<<endl;
				}
				else
				{
					if(p2=="papel")
					{
						cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
					}
					else
					{
						if(p2=="tesoura")
						{
							cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
						}
						else
						{
							if(p2=="lagarto")
							{
								cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
							}
							else
							{
								cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
							}
						}
					}
				}
			}
			else
			{
				if(p1=="tesoura")
				{
					if(p2=="tesoura")
					{
						cout<<"Caso #"<<i+1<<": De novo!"<<endl;
					}
					else
					{
						if(p2=="pedra")
						{
							cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
						}
						else
						{
							if(p2=="papel")
							{
								cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
							}
							else
							{
								if(p2=="lagarto")
								{
									cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
								}
								else
								{
									cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
								}
							}
						}
					}
				}
				else
				{
					if(p1=="lagarto")
					{
						if(p2=="lagarto")
						{
							cout<<"Caso #"<<i+1<<": De novo!"<<endl;
						}
						else
						{
							if(p2=="pedra")
							{
								cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
							}
							else
							{
								if(p2=="papel")
								{
									cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
								}
								else
								{
									if(p2=="tesoura")
									{
										cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
									}
									else
									{
										cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
									}
								}
							}
						}
					}
					else
					{
						if(p2=="pedra")
						{
							cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
						}
						else
						{
							if(p2=="papel")
							{
								cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
							}
							else
							{
								if(p2=="tesoura")
								{
									cout<<"Caso #"<<i+1<<": Bazinga!"<<endl;
								}
								else
								{
									if(p2=="lagarto")
									{
										cout<<"Caso #"<<i+1<<": Raj trapaceou!"<<endl;
									}
									else
									{
										cout<<"Caso #"<<i+1<<": De novo!"<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}