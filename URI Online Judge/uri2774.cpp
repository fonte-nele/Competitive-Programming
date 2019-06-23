#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int main()
{
    int H, M, QT, i;
    double x[MAX], avg, sum, ans;
    while(cin >> H >> M)
    {
        QT = H * 60 / M;
        avg = 0.0;
        for(i = 0; i < QT; i++)
        {
            cin >> x[i];
            avg += x[i];
        }
        avg /= (double)QT;
        sum = 0.0;
        for(i = 0; i < QT; i++)
        {
            sum += pow(x[i] - avg, 2.0);
        }
        ans = sqrt(sum / (double)(QT - 1));
        printf("%.5lf\n", ans);
    }
    return 0;
}