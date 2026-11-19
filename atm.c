#include<stdio.h>
int main(){
    int pin, a, with;
    float bal=5000;
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if (pin!=1234){
        printf("ACCESS DENIED");
    }
    else{
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        scanf("%d",&a);
    
        switch(a){
            case 1:
                printf("Current balance: Rs.5000.00");
                break;
            case 2:
                scanf("%d",&with);
                if (bal<with){
                    printf("Insufficient balance.");
                }
                else{
                    bal = bal-with;
                    printf("Withdrawal successful. New balance: Rs.%.2f", bal);
                }
                break;
            case 3:
                scanf("%d",&with);
                if (with<100){
                     printf("Minimum deposit is Rs.100.");
                }
                else{
                    bal = bal + with;
                    printf("Deposit successful. New balance: Rs.%.2f", bal);
                }
                break;
            case 4:
                printf("Thank you.");
                break;
        }
    }
    return 0;
}