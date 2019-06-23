#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ara[10000];
int main()
{
        memset(ara,0,sizeof ara);
        int tc,n,i,j,tmp;
            scanf("%d",&tc);

                while(tc--){
                   int tmp=0;
                        scanf("%d",&n);
                        for(i=0;i<n;i++){
                            scanf("%d",&ara[i]);  // 1 2 3 2 3 -- output--: 3
                             tmp++;
                        }
                        int t=0;
                            for(i=0;i<n;i++){
                                    t=ara[i]; // 1
                                    for(j=i+1;j<n;j++){
                                            if(t==ara[j]){
                                            tmp=tmp-1;
                                            break;
                                            }
                                    }
                            }

                                        printf("%d\n",tmp);
                }

    return 0;
}