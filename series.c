#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter the number of terms you want to print: ");
    scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    for (int i=1;i<=n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}