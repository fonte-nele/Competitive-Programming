#include <iostream>
using namespace std;
int main()
{
    double N;
    int N100=0, N50=0, N20=0, N10=0, N5=0, N2=0, M1=0, M50=0, M25=0, M10=0, M5=0, M2=0, n;

    cin >> N;
    n = N*100;

    while(n>=10000)
    {
        if(n>=10000)
        {
            n-=10000;
            N100+=1;
        }
    }
    while(n>=5000)
    {
        if(n>=5000)
        {
            n-=5000;
            N50+=1;
        }
    }
    while(n>=2000)
    {
        if(n>=2000)
        {
            n-=2000;
            N20+=1;
        }
    }
    while(n>=1000)
    {
        if(n>=1000)
        {
            n-=1000;
            N10+=1;
        }
    }
    while(n>=500)
    {
        if(n>=500)
        {
            n-=500;
            N5+=1;
        }
    }
    while(n>=200)
    {
        if(n>=200)
        {
            n-=200;
            N2+=1;
        }
    }
    while(n>=100)
    {
        if(n>=100)
        {
            n-=100;
            M1+=1;
        }
    }
    while(n>=50)
    {
        if(n>=50)
        {
            n-=50;
            M50+=1;
        }
    }
    while(n>=25)
    {
        if(n>=25)
        {
            n-=25;
            M25+=1;
        }
    }
    while(n>=10)
    {
        if(n>=10)
        {
            n-=10;
            M10+=1;
        }
    }
    while(n>=5)
    {
        if(n>=5)
        {
            n-=5;
            M5+=1;
        }
    }
    while(n>=1)
    {

           if(n>=1)
        {
            n-=1;
            M2+=1;
        }
    }

	cout << "NOTAS:" << endl;
    cout << N100 << " nota(s) de R$ 100.00" << endl;
    cout << N50 << " nota(s) de R$ 50.00" << endl;
    cout << N20 << " nota(s) de R$ 20.00" << endl;
    cout << N10 << " nota(s) de R$ 10.00" << endl;
    cout << N5 << " nota(s) de R$ 5.00" << endl;
    cout << N2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
    cout << M1 << " moeda(s) de R$ 1.00" << endl;
	cout << M50 << " moeda(s) de R$ 0.50" << endl;
	cout << M25 << " moeda(s) de R$ 0.25" << endl;
	cout << M10 << " moeda(s) de R$ 0.10" << endl;
	cout << M5 << " moeda(s) de R$ 0.05" << endl;
	cout << M2 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}