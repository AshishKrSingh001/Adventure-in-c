// Function:
// Function is basically a set of statements thet takes inputs, perform some computation and produce output.
// Why we use function:
// 1.Reusesibility;
// 2.Abstraction;

#include <stdio.h>
int area(int length,int breadth){
    int a;
    a=length*breadth;
    return a;
}
int parimeter(int length,int breadth){
    int p;
    p=2*(length+breadth);
    return p;
}
int main(){
    int l,b,pari;
    printf("Enter length and breadth of the rectangle:");
    scanf("%d%d",&l,&b);
    pari=parimeter(l,b);
    printf("Area of rectangle is %d",area(l,b));
    printf("\nParimeter of rectangle is %d",pari);
    return 0;
}