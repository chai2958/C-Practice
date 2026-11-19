#include<stdio.h>
int main(){
    printf("1. Water Bottle - Rs.20\n");
    printf("2. Chips        - Rs.35\n");
    printf("3. Chocolate    - Rs.50\n");
    printf("4. Cold Drink   - Rs.40\n");
    int a,p,m;
    float b;
    scanf("%d %d",&a,&m);
    switch (a){
        case 1:
           p=20;
           if (m<p){
               b = p-m;
               printf("Insufficient. Need Rs.%.2f more.",b);
           }
           else{
               b = m-p;
               printf("Dispensing item\n");
               if (b!=0){
                    printf("Change:Rs.%.2f",b);
               }
           }
           break;
        case 2:
            p=35;
           if (m<p){
               b = p-m;
               printf("Insufficient. Need Rs.%.2f more.",b);
           }
           else{
               b = m-p;
               printf("Dispensing item\n");
               if (b!=0){
                    printf("Change:Rs.%.2f",b);
               }
           }
           break;
       case 3:
            p=50;
           if (m<p){
               b = p-m;
               printf("Insufficient. Need Rs.%.2f more.",b);
           }
           else{
                b = m-p;
                printf("Dispensing item\n");
                if (b!=0){
                    printf("Change:Rs.%.2f",b);
               }
           }
           break;
        case 4:
            p=40;
           if (m<p){
               b = p-m;
               printf("Insufficient. Need Rs.%.2f more.",b);
           }
           else{
                b = m-p;
                printf("Dispensing item\n");
                if (b!=0){
                    printf("Change:Rs.%.2f",b);
                }
           }
           break;
        default:
            printf("Invalid item selected.");
            break;
    }
    return 0;
}