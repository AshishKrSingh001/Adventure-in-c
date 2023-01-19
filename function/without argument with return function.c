#include <stdio.h>
int main()
{
    int sum();
    int c=sum();
    printf("Addition=%d",c);
}
int sum()
{
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    return x+y;
}
