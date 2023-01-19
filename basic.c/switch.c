// Rules for switch statements:
// 1. Switch expression must be an int or char.
// 2  Case value must be an integer or a character.
// 3. Case must come inside switch.
// 4. break is not compulsory.

#include <stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    switch(age)
    {
        case 3:
        
        printf("age is 3");
        break;
        case 23:
        printf("age is 23");
        break;
        case 29:
        printf("age is 29");
        break;
        default:
        printf("age is not 3,23,29");
        break;
    }
    return 0;
}