#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,k; 
    float c,d; a=15; 
    b=a/2; 
    c=15.456; 
    d=c/7; 
    k=trunc(d); 
    printf("Valores de b:\n"); 
    printf("-------------\n"); 
    printf("1) b = %d\n",b); 
    printf("2) b = %20d\n",b); 
    printf("3) b = %020d\n",b); 
    printf("4) b = %-20d\n",b); 
    printf("5) b = %d%%\n",b); 
    printf("\nValores de d:\n"); 
    printf("-------------\n"); 
    printf("1) d = %f\n",d); 
    printf("2) d = %d\n",k); 
    printf("3) d = %.1f\n",d); 
    printf("4) d = %.2f\n",d); 
    printf("5) d = %.3f\n",d); 
    printf("6) d = %20.3f\n",d); 
    printf("7) d = %020.3f\n",d); 
    printf("8) d = %-20.3f\n",d); 
    printf("9) d = %.2f%%\n",d);

    /*cout << "Valores de b:" << endl;
    cout << "-------------" << endl;
    cout << "1) b = 7" << endl;
    cout << "2) b = 7" << endl;
    cout << "3) b = 00000000000000000007" << endl;
    cout << "4) b = 7" << endl;
    cout << "5) b = 7%" << endl << endl;
    cout << "Valores de d:" << endl;
    cout << "-------------" << endl;
    cout << "1) d = 2.208000" << endl;
    cout << "2) d = 2" << endl;
    cout << "3) d = 2.2" << endl;
    cout << "4) d = 2.21" << endl;
    cout << "5) d = 2.208" << endl;
    cout << "6) d = 2.208" << endl;
    cout << "7) d = 0000000000000002.208" << endl;
    cout << "8) d = 2.208" << endl;
    cout << "9) d = 2.21%" << endl;*/
    return 0;
}

