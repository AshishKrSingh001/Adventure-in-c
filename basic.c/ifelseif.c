// WAP to input two number and findout which one is greatest,smallest or both of them are equal.
#include <stdio.h>
int main(){
    int a,b;
    printf("enter first integer:");
    scanf("%d",&a);
    printf("\nenter second integer:");
    scanf("%d",&b);
    printf("your first number is %d\nand second number is %d\n",a,b);
    if(a>b){
        printf("%d is greater then %d",a,b);
    }
    else if(a<b){
        printf("%d is greater then %d",b,a);
    }
    else{
        printf("%d is equal to %d",a,b);
    }
    return 0;
}