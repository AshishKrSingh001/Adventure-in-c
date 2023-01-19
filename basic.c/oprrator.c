// operators in c:
// -an operator is a symbol used to perform operations in given p language

// types of operators in c:
// -Arithmetic operators
// -Relational operators
// -Logical operators
// -Bitwise operators
// -Assignment operators

// -Arithmetic operators
// +   Addition
// -   Subtraction
// *   Multiplication
// /   Division
// %   modulus

#include <stdio.h>
int main(){
    int a=12,b=2;
printf("Addition:%d\n",a+b);
printf("Subtration:%d\n",a-b);
printf("Multiplication:%d\n",a*b);
printf("Division:%d\n",a/b);
printf("Modulus:%d\n",a%b);
return 0;
}

// Relational Operators:
// ==  is equal to
// !=  not equal to
// >   greater than
// <   less than
// >=  greater than or equal to
// <=  less than or equal to
#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    
    printf("a==b=%d\n",a==b);
    printf("a!=b=%d\n",a!=b);
    printf("a>=b=%d\n",a>=b);
    printf("a<=b=%d\n",a<=b);
    printf("a>b= %d\n",a>b);
    printf("a<b= %d\n",a<b);
    return 0;
}
// Logical operators:
// &&  logical AND operator.if both operands are non zero then the condition is true, otherwise false.
// ||  logical OR opreator.if any of two operands are non zero then condition become true ,otherwise false.
// !   logical NOT operator.Reverse the result.
#include <stdio.h>
int main(){
    int a,b;
 printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    
    printf("a==b&&a>=b=%d\n",a==b&&a>=b);
    printf("a!=b||a>b=%d\n",a!=b||a>b);
    printf("!(a>=b)=%d\n",!(a>=b));
    return 0;
}
// Bitwise operator:
// &   AND
// |   OR
// ^   XOR
// ~   Binary complements operator
// <<  Binary left shift operator
// >>  Binary right shift operator

// a   b   a&b a|b a^b
// 0   0   0   0   1
// 0   1   0   1   1
// 1   0   0   1   1
// 1   1   1   1   0


// Assignment operator:
// =   simple assignment operators
// +=  add AND assignment operators
// -=  subtract AND assignment operators
// *=  multiply AND assignment operators
// /=  divide AND assignment operators

// Miscellaneous operators:
// sizeof()    returns the size of the varible
// &           returns the address of the varible
// *           pointer to a varible
// ?:          conditional expression