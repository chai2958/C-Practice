#include<stdio.h>
int main(){
    int a;
    long product=1;
    scanf("%d",&a);
    
    for (int i=a; i>0 ; i--){
        product = product*i; 
    }
    printf("%ld", product);
}