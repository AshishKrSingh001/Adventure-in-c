// format specifier is a way to tell the compiler what type of data is in a variable during taking input and displaying output
// 1.    %c      caharcter
// 2.    %d      integer
// 3.    %f      float
// 4.    %e      long
// 5.    %lf     double
// 6.    %LF     long double
#include <stdio.h>
int main(){
    int a=8;
    float b=3.333333;
    printf("the value of a is %d and the value of b is %f\n",a,b);
    printf("the value of a is %d and the value of b is %10f\n",a,b);
    // %10f means if the total no of float is 10 or more than 10 then it will be same as %f but if less than 10 then the space occurs in left side of the float.

    printf("the value of a is %d and the value of b is %10.9f\n",a,b);
    // %10.9f In this 10 means float number is less than 10 then the space occurs in left side and .9 mean if the no of element after the decimal is 9 or more than 9 then the output is same as %f but if less than 9 then output will merge some element after the right side.
    
    printf("the value of a is %d and the value of b is %-10.9f\n",a,b);
    //%10.9f In this -10 means float number is less than 10 then the space occurs in right side and .9 mean if the no of element after the decimal is 9 or more than 9 then the output is same as %f but if less than 9 then output will merge some element after the right side.
    
    printf("the value of a is %d and the value of b is %-10f",a,b);
    return 0;
      // %10f means if the total no of float is 10 or more than 10 then it will be same as %f but if less than 10 then the space occurs in left side of the float.
}