#include<math.h>
#include<stdio.h>

int main(){
    int n, b, c, i=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while (n/(pow(10 ,i)) >= 1)
    {
        b = n/(pow(10, i));
        c = b%10;
        printf("%d ", c);
        i++;
    }
    return 0;
}
   