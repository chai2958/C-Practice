#include<stdio.h>

int main(){
    int n, b, c, i=0, f=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp =n;
    while (n>=1)
    {
        c = n%10;
        n = n/10;
        i++;
        f = f*10 + c;
    }
    if (temp==f){
        printf("Transaction Approved.");
    }
    else{
        printf("Transaction Rejected.");
    }
    return 0;
}
   