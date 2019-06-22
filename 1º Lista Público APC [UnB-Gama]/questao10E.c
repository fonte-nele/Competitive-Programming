#include <stdio.h>

int main(){
    int i, j, x, y, k, m , n, cont = 1;

    while(scanf("%d %d", &x, &y) && x+y){
        int logo[x][y];

        for(i = 0; i < x; i++){
            for(j = 0; j < y; j++){
                scanf("%d", &logo[i][j]);
            }
        }
        scanf("%d %d %d", &k, &m, &n);
        int total = 0;
        while(k--){
            int mat[m][n], o, p;

            for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                    scanf("%d", &mat[i][j]);
                }
            }
            for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                    if(mat[i][j] == logo[0][0]){
                        int flag = 1;
                        for(o = 0; o < x; o++){
                            for(p = 0; p < y; p++){
                                if(i+o >= m || j+p >= n){
                                    flag = 0;
                                    break;
                                }
                                if(mat[i+o][j+p] != logo[o][p]){
                                    flag = 0;
                                    break;
                                }
                            }
                            if(flag == 0)
                                break;
                        }
                        if(flag)
                            total++;
                    }
                }
            }
        }
        printf("Logotipo %d\n", cont);
        printf("%d\n\n", total);
        cont++;
    }

	return 0;
}