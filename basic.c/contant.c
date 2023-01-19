//A constant is a value that can't be changed in the program ,for example:15.22,"a",3.4,22,"ashish" etc.
// there are two way to define constant in C programming:
//-const keywoard
//-#define preprocessor
 #include <stdio.h>
 #define c 3
 int main(){
     int a=11;
     const int b=11;
    // c=1 c can't be changed because it is costant by using #define preprocessor
    a=22; // here we change the value of a but b can't be changed because it is constant by using const keywoard.
     printf("addition of %d and %d is %d\n",a,b,a+b);
     printf("c is %d",c);
     return 0;
 }