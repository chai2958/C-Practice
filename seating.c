#include <stdio.h>
int main(){
    int n , a=1, g, k;
    scanf("%d",&n);
    
    for (int i = 1 ; i <=n ; i++){
        k = i;
        for (int j=0; j < i; j++){
            if (i%2!=0){
                printf("%d ",a);
                a++;
            }
            else {
                g = (a+k-1)-j;
                printf("%d ",g);
                a++;
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}