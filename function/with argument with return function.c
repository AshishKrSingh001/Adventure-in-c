// Function in c:
// -Function are used to divide a large c program into smaller parts.
// -A function can be called multiple time to provide  reusability and modularity to the c program.
// -Also called procedure or subroutine.

//There are two types of function:
//-Library function.
//-User defined function.

// Function code example:
// -Without arguments and without return value.
// -Without arguments and with return value.
// -With arguments and without return value.
// -With arguments and with return value.

#include <stdio.h>
int sum(int a,int b)
{return a+b;}
int sub(int a,int b)
{return a-b;}
int mult(int a,int b)
{return a*b;}
int div(int a,int b)
{return a/b;}
int reminder(int a,int b)
{return a%b;}
int main()
{
    int a,b;
    double f;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nThe sum is %d",sum(a,b));
    printf("\nThe subtraction is %d",sub(a,b));
    printf("\nThe multiplication is %d",mult(a,b));
    printf("\nThe division is %lf",div(a,b));
    printf("\nThe reminder is %d",reminder(a,b));
    return 0;
}