#include <bits/stdc++.h>
using namespace std;
#define MAX 112

bool rev(double a, double b)
{
    return a > b;
}

int main()
{
    int N, K, i, j, k;
    int a[MAX];
    double avg;
    while(cin >> N >> K)
    {
        for(i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        vector<double> v;
        for(i = 0; i < N; i++)
            for(j = i+1; j < N; j++)
                for(k = j+1; k < N; k++)
                {
                    avg = (double)(a[i] + a[j] + a[k]) / 3.0;
                    v.push_back(avg);
                }
        sort(v.begin(), v.end(), rev);
        printf("%.1lf\n", v[K-1]);
    }
    return 0;
}