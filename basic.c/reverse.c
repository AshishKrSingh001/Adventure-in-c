// WAP to input a number and return the reverse of the digit of the number.
#include <stdio.h>
int main(){
    int num,rev=0,r;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
    r=num%10;
    rev=rev*10+r;
    num=num/10;
    }
     printf("reverse of digit is %d",rev);
    return 0;
}