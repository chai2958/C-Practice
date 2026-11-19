#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int trans[c][r];
    for (int k=0;k<r;k++){
        for (int l=0;l<c;l++){
            trans[l][k]=matrix[k][l];
        }
    }
    for (int a=0;a<c;a++){
            for (int b=0;b<r;b++){
                printf("%d ", trans[a][b]);
            }
            printf("\n");
        }
}