#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d",&a);
    b=0;
    f=0;
    while(a/(pow(10,b)) >= 1)
    {
        c=a/(pow(10,b));
        d=c%10;
        e=pow(d,3);
        f=f+e;
        b++;
    }
    if (f==a){
        printf("Armstrong Number");
    }
    else
    {
        printf("Not");
    }
}