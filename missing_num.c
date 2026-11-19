#include<stdio.h>
int main(){
    int n,a,k=0,s;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        array[i]=a;
    }
    s = array[0];
    for (int j=0;j<n;j++){
        while (array[j]>s){
            printf("%d ",s);
            k++;
            s++;
        }
        s=array[j]+1;
    }
    printf("\n%d",k);
    return 0;
}