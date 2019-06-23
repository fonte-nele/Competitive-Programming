#include <iostream>
 
using namespace std;
 
int main()
{
    int valor,aux,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0;
    cin>>valor;
    aux=valor;
    while(aux!=0)
    {
        if(aux>=100)
        {
            aux-=100;
            cont1++;
        }
        else{
            if(aux>=50)
            {
                aux-=50;
                cont2++;
            }
            else
            {
                if(aux>=20)
                {
                    aux-=20;
                    cont3++;
                }
                else
                {
                    if(aux>=10)
                    {
                        aux-=10;
                        cont4++;
                    }
                    else
                    {
                        if(aux>=5)
                        {
                            aux-=5;
                            cont5++;
                        }
                        else
                        {
                            if(aux>=2)
                            {
                                aux-=2;
                                cont6++;
                            }
                            else
                            {
                                aux-=1;
                                cont7++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<valor<<endl;
    cout<<cont1<<" nota(s) de R$ 100,00"<<endl;
    cout<<cont2<<" nota(s) de R$ 50,00"<<endl;
    cout<<cont3<<" nota(s) de R$ 20,00"<<endl;
    cout<<cont4<<" nota(s) de R$ 10,00"<<endl;
    cout<<cont5<<" nota(s) de R$ 5,00"<<endl;
    cout<<cont6<<" nota(s) de R$ 2,00"<<endl;
    cout<<cont7<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}