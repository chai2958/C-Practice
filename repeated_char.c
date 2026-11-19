#include<stdio.h>
int main(){
    char array[1000];
    int index[1000];
    fgets(array,1000,stdin);
    for (int i=0;array[i]!= '\0';i++){
        for (int j=i+1;array[j]!= '\0';j++){
            if (array[i]== array[j]){
                array[j]=1;
            }
        }
    }
   for (int l=0;array[l]!= '\0';l++){
       printf( "%c", array[l]);
   }
   return 0;
}