#include<stdio.h>
int main(){
    int a, b;

    printf("Enter Class: ");
    scanf("%d",&a);
    printf("Enter the number of failing subjects: ");
    scanf("%d",&b);

    switch (a){
        case 1:
            if (b > 3){
                printf("No grace marks for you.");
            }
            else{
                b = b*5;
                printf("%d",b);
            }
            break;

        case 2:
            if (b > 2){
                printf("No grace marks for you.");
            }
            else{
                b = b*4;
                printf("%d",b);
            }
            break;

        case 3:
            if (b > 1){
                printf("No grace marks for you.");
            }
            else{
                b = b*5;
                printf("%d",b);
            }
            break;
    }
    return 0;
}