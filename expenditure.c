#include<stdio.h>
int main(){
    int n, a, sum=0;
    scanf("%d",&n);
    int exp[n];
    for (int j=0;j<n;){
        scanf("%d\n",&a);
        exp[j]=a;
        j++;
    }
    
    for (int i=0; i<n;i++){
        sum = sum +exp[i];
    }
    printf("sum=%d", sum);
    return 0;
}