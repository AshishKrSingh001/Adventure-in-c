// WAP to check a number is prime or not by taking input.

#include <stdio.h>
int main(){
    int num,i,j=0;
    printf("Enter a number");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            j++;
        }
        goto jump;
    }
    printf("your answer is getting ready\n");
    jump:
    if(j==0 && num!=1){
        printf("%d is a prime number",num);
    }
    else{
    printf("your number %d is not prime",num);
    }
    return 0;
}