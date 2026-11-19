#include<stdio.h>
#include<string.h>
int main(){
    char array[100];
    fgets(array,100,stdin);
    if (array[0]>='A' && array[0]<='Z'){
        printf("%c",array[0]);
    }
    else{
        array[0]=array[0]- 32;
        printf("%c",array[0]);
    }
    for (int i=1;array[i]!='\0';i++){
        if (array[i]==' '){
            if (array[i+1]>= 'A' && array[i+1]<= 'Z'){
                printf("%c",array[i+1]);
            }
            else{
                array[i+1]=array[i+1]- 32;
                printf("%c",array[i+1]);
            }
        }
    }
    return 0;
}