#include <stdio.h>
int main(){
    int i;
    printf("Enter even number between 1to 100:\n");
    for(i=2;i<=100;i=i+2){
        if(i%2==0){
            printf("%d",i);
        }
    }

    printf("Enter odd number between 1to 100:\n")
    for(i=2;i<=100;i=i+2)
        if(i%2==0)
            printf("%d",i);
        
    return 0;
}