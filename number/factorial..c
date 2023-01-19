#include <stdio.h>
int main(){
    int i,j,fact=1;
    printf("Enter a number");
    scanf("%d",&j);
    for(i=1;i<=j;i=i+1){
        fact=fact*i;
    }
    printf("\nFactorial of %d is %d",j,fact);
    return 0;
}