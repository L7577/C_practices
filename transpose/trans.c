#include <stdio.h>




int main(int argc, char **argv)
{
    int N,M;
    //printf("%s",argv[1][1]);
    N = 32;
    M = N; //argv[2];
    int A[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            A[i][j] = i; 
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int i,j,k,kk,jj;
    int bsize = (N / sizeof(int));
    int en = bsize * (N / bsize);
    printf("bsize = %d en = %d\n",bsize,en);
    int B[M][N];
    for (kk = 0; kk < en; kk += bsize) {
        for (jj = 0; jj < en; jj += bsize) {
            //
            for (k = kk; k < kk + bsize; k++){
                int tmp[bsize];
                for (int i = 0; i < bsize; i++){
                    tmp[i] = A[k][jj+i];
                    B[jj+i][k] = tmp[i];
                }
            }
        }
    }

    printf("\n==============================================\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}