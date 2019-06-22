#include <stdio.h>

int main(){
    int n, m, s;

    while(scanf("%d %d %d", &n, &m, &s) && n+m+s){
        char mat[n][m], op;
        int i, j, posi, posj, dir, total = 0;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        getchar();
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%c", &mat[i][j]);
                if(mat[i][j] == 'N' || mat[i][j] == 'S' || mat[i][j] == 'L' || mat[i][j] == 'O'){
                    posi = i;
                    posj = j;
                    if(mat[i][j] == 'N')
                        dir = 0;
                    else if(mat[i][j] == 'L')
                        dir = 1;
                    else if(mat[i][j] == 'S')
                        dir = 2;
                    else if(mat[i][j] == 'O')
                        dir = 3;
                }
                //printf("%c", mat[i][j]);
            }
            getchar();
            //printf("\n");
        }
        //getchar();
        for(i = 0; i < s; i++){
            scanf("%c", &op);
            //printf("Op = %c\n", op);
            if(op == 'D'){
                dir = (dir+1) % 4;
            }else if(op == 'E'){
                dir = (dir+3) % 4;
            }else if(op == 'F'){
                if(posi + dx[dir] != n && posj + dy[dir] != m && posi + dx[dir] >= 0 && posj + dy[dir] >= 0){

                    char t = mat[posi + dx[dir]][posj + dy[dir]];
                    if(t != '#'){
                        mat[posi][posj] = '.';
                        if(t == '*'){
                            total++;
                        }
                        posi += dx[dir];
                        posj += dy[dir];
                    }

                }

                /*if(dir == 0){
                    if(posi-1 >= 0){
                        if(mat[posi-1][posj] == '*'){
                            mat[posi-1][posj] = '.';
                            total++;
                            posi--;
                        }else if(mat[posi-1][posj] == '.'){
                            posi--;
                        }
                    }
                }else if(dir == 1){
                    if(posj+1 != m){
                        if(mat[posi][posj+1] == '*'){
                            mat[posi][posj+1] = '.';
                            total++;
                            posj++;
                        }else if(mat[posi][posj+1] == '.'){
                            posj++;
                        }
                    }
                }else if(dir == 2){
                    if(posi+1 != n){
                        if(mat[posi+1][posj] == '*'){
                            mat[posi+1][posj] = '.';
                            total++;
                            posi++;
                        }else if(mat[posi+1][posj] == '.'){
                            posi++;
                        }
                    }
                }else if(dir == 3){
                    if(posj-1 >= 0){
                        if(mat[posi][posj-1] == '*'){
                            mat[posi][posj-1] = '.';
                            total++;
                            posj--;
                        }else if(mat[posi][posj-1] == '.'){
                            posj--;
                        }
                    }
                }*/
            }
            //printf("PosI = %d PosJ = %d Dir = %d I = %d\n", posi, posj, dir, i);
        }

        /*for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                printf("%c", mat[i][j]);
            }
            printf("\n");
        }*/
        printf("%d\n", total);
    }

	return 0;
}