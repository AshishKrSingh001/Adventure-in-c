// Recurisions of C:
#include <stdio.h>
int main(){
    int a,b,c,i;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    for(i=1;i<=5;i=i+1){
        c=a+b;
        printf("%d,",a);
        a=b;
        b=c;
    }
}