#include <stdio.h>
#include "12.c"
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("Sum=%d",fun(a,b));
    return 0;
}