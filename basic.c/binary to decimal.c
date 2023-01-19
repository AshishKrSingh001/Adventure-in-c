#include <stdio.h>
int main(){
    int binary;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    int decimal=0,weight=1,rem;
    while(binary!=0){
        rem=binary%10;
        decimal=decimal+weight*rem;
        binary=binary/10;
        weight=weight*2;
    }
    printf("The decimal number is:%d",decimal);
    return 0;
}