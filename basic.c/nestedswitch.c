// Rules for switch statements:
// 1. Switch expression must be an int or char.
// 2  Case value must be an integer or a character.
// 3. Case must come inside switch.
// 4. break is not compulsory.

#include <stdio.h>
int main(){
    int age,marks;
    printf("enter your age:");
    scanf("%d",&age);
     printf("enter your marks:");
    scanf("%d",&marks);
    switch(age)
    {
        case 3:
        printf("age is 3\n");
        switch(marks){
            case 45:
            printf("your marks are 45\n");
            break;
            default:
            printf("your marks are not 45\n");
        }
        break;
        case 23:
        printf("age is 23\n");
        break;
        case 29:
        printf("age is 29\n");
        break;
        default:
        printf("age is not 3,23,29\n");
        break;
    }
    return 0;
}