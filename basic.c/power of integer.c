#include <stdio.h>
int main(){
    int base,exponent;
    int power=1,expo;
    double power1=1.0;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exponent);
    expo=exponent;
    if(exponent>0){
        while(exponent!=0){
            power=power*base;
            exponent--;
        }
        printf("%d to the power of %d is %d",base,expo,power);
    }
    else if(exponent==0){
        printf("%d to the power of %d is 1",base,expo);
    }
    else{
        while(exponent!=0){
            power1=power1/base;
            exponent++;
        }
        printf("%d to the power of %d is %lf",base,expo,power1);

    }
    return 0;
}