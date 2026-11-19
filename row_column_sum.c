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
    for (int k=0;k<r;k++){
        int sumr=0;
        for (int l=0;l<c;l++){
            sumr= sumr + matrix[k][l];
            if (l==c-1){
                printf("%d\n",sumr);   
            }
        }
    }
    for (int a=0;a<c;a++){
        int sumc=0;
        for (int b=0;b<r;b++){
            sumc = sumc+ matrix[b][a];
            if (b==r-1){
                printf("%d\n",sumc);   
            }
        }
    }
    return 0;
}