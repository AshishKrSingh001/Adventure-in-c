#include <stdio.h>
int main(){
    char m;
    int a,b;
    printf("enter your operation");
    scanf("%c",&m);
    printf("\nenter first number");
    scanf("%d",&a);
    printf("\nenter second number");
    scanf("%d",&b);
    switch(m)
    {
        case '+':
        printf("\naddition=%d",a+b);
        break;
        case '-':
        printf("\nsub=%d",a-b);
        break;
        
        case '*':
        printf("\nmultiply=%d",a*b);
        break;
        case '/':
        printf("\ndivide=%d",a/b);
        break;
        case '%':
        printf("\nrem=%d",a%b);
        break;
        default:
        printf("\ninvalid oprater");

    }


    }

