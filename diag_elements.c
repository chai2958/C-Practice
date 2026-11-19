#include<stdio.h>
int main(){
    int r,c,sum=0;
    scanf("%d",&r);
    c=r;
    int matrix[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Main diagonal elements: ");
    for (int k=0;k<r;k++){
        printf("%d ", matrix[k][k]);
        sum=sum+matrix[k][k];
    }
    printf("\nSum of diagonal elements: ");
    printf("%d",sum);
    return 0;
}