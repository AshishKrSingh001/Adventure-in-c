// WAP to input a number and check the number is palindrome or not .
#include <stdio.h>
int main(){
    int num,rev=0,r,n;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(num>0){
    r=num%10;
    rev=rev*10+r;
    num=num/10;
    }
     printf("reverse of digit is %d",rev);
     if(n==rev){
         printf("\nThe number is palindrome");
     }
     else{
         printf("\nThe number is not palindrome");
     }
    return 0;
}