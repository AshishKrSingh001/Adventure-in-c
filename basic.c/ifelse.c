//WAP to input your age and check if you are eligible for voting or not.
#include <stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible for voting");
    }
    else{
        printf("you are not eligible for voting");
    }
    return 0;
}