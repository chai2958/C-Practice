#include<stdio.h>
int main(){
    char x; 
    int a, b, c;
    float d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&x);
    
    switch (x){
        case '+':
            c = a+b;
            printf("%d",c);
            break;
        case '-':
            c = a-b;
            printf("%d",c);
            break;
        case '*':
            c = a*b;
            printf("%d",c);
            break;
        case '/':
            if (b==0){
                printf("Invalid input.");
            }
            else {
                d = a/b;
                printf("%.2f", d);
            }
            break;
        case '%':
            if (b==0){
                printf("Invalid input.");
            }
            else {
                d = a%b;
                printf("%.2f", d);
            }
            break;
        default:
            printf("Invalid Operator.");
        break;
    }
    
}