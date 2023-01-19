#include <stdio.h>
int main(){
    int i;
    printf("Odd num between 1 to 100\n");
    for(i=1;i<=100;i=i+2){
        printf("%d\t",i);
    }
    printf("\nEven num between 1 to 100\n");
    for(i=2;i<=100;i=i+2){
        printf("%d\t",i);
    }
}