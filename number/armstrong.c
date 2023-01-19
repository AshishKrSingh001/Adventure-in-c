// WAP to input a number and return the sum of the digit of the number.
#include <stdio.h>
int main(){
    int num,r,b=0,n,a;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nconfirm the number:");
    scanf("%d",&n);
    if(n==num){
    while(num>0){
    a=1;
    r=num%10;
    a=r*r*r;
    b=b+a;
    num=num/10;
    }
     if(n==b){
         printf("\nThe number is armstrong");
     }
     else{
         printf("\nThe number is not armstrong");
     }
    }
    else{
        printf("both number are not same");
    }
    return 0;
}