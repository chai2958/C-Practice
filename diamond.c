#include <stdio.h>
int main(){
    int n,z;
    z=n/2;
    scanf("%d",&n);
    for (int i=1; i<=n/2;i++){
        for (int j=n/2-i+1;j>0;j--){
            printf(" ");
        }
        for (int k=0; k<i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for (int l=1;l<=n-2;l++){
        printf("* ");
    }
    printf("\n");
    for (int m=1;m<=n/2;m++){
        for (int p=m;p>0;p--){
            printf(" ");
        }
        for (int o=n/2-m+1;o>0;o--){
            printf("* ");
        }
        printf("\n");
    }
}