// C if else statements(control statement):
// -It is used to perform some operation based on some condition.

// Types of if statements in C:
// 1.  if statement  
// 2.  if-else statement
// 3.  if-elseif ladder
// 4.  Nested if

//WAP to input your age and check if you are eligible for voting or not.
#include <stdio.h>
int main(){
 int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("\nyou are eligible for voting");
    }
    return 0;
}