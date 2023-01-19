// Wap to input two integer and print all arithmetic operation of them by using with argument without return.

#include <stdio.h>
int main(){
    void sum(int,int);
    void sub(int,int);
    void mult(int,int);
    void div(int,int);
    void rem(int,int);
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("\nEnter second number");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    mult(a,b);
    div(a,b);
    mod(a,b);
}
    void sum(int x,int y){
    int z=x+y;
    printf("\nAddition=%d",z);
}
 void sub(int x,int y){
    int z=x-y;
    printf("\nSubtraction=%d",z);
}
 void mult(int x,int y){
    int z=x*y;
    printf("\nMultiplication=%d",z);
}
 void div(int x,int y){
    int z=x/y;
    printf("\nDivision=%d",z);
}
 void mod(int x,int y){
    int z=x%y;
    printf("\nModulus=%d",z);
}

