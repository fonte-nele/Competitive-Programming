#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string corvo;
	int cont=0,soma=0;
	while(cont<=3)
	{
		getline(cin,corvo);
		if(corvo=="caw caw")
		{
			cont++;
			cout<<soma<<endl;
			soma=0;
			if(cont==3)
			{
				break;
			}
		}
		else
		{
			if(corvo=="--*")
			{
				soma+=1;
			}
			else
			{
				if(corvo=="*--")
				{
					soma+=4;
				}
				else
				{
					if(corvo=="-*-")
					{
						soma+=2;
					}
					else
					{
						if(corvo=="-**")
						{
							soma+=3;
							
						}
						else
						{
							if(corvo=="*-*")
							{
								soma+=5;
								
							}
							else
							{
								if(corvo=="**-")
								{
									soma+=6;
									
								}
								else
								{
									if(corvo=="***")
									{
										soma+=7;
										
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