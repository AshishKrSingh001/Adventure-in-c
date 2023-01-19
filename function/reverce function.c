#include <stdio.h>
int reverse(int num){
    int rem,i=0,rev=0;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        i++;
    }
    return rev;
}
int main(){
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    printf("reverse of %d is %d",number,reverse(number));
    return 0;
}