#include<stdio.h>
int main(){
    // declaring variables
    int a, b, c;
    // Asking for input
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    // Swapping numbers with c being the temporary variable
    c = a;
    a = b;
    b = c;
    // Printing output
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);
    return 0;
}