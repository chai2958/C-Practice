#include<stdio.h>
int main(){
    int a, b, c;
    printf("Input Amal's age: ");
    scanf("%d",&a);
    printf("Input Binu's age: ");
    scanf("%d",&b);
    printf("Enter Chandu's age: ");
    scanf("%d",&c);
    
    if (a > b && a > c )
    {
        printf("Amal is the oldest with age: %d", a);
    }
    else if ( b > a && b > c )
    {
        printf("Binu is the oldest with age: %d", b);
    }
    else if ( c > a && c > b)
    {
        printf("Chandu is the oldest with age: %d", c);
    }
    else if ( a > b && a == c)
    {
        printf("Amal and Chandu are the oldest with age: %d", c);
    }
    else if ( b > a && c == b )
    {
        printf("Chandu and Binu are the oldest with age: %d", b);
    }
    else if ( c < b && a == b)
    {
        printf("Binu and Chandu are the oldest with age: %d", b);
    }
    else if ( a == b && b == c) 
    {
        printf("All are of same age. ");
    }
    return 0;
}