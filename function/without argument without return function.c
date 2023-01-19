#include <stdio.h>
int main()
{
    int sum();
 sum();
}
int sum()
{
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    int sum=x+y;
    printf("Addition=%d",sum);
}
