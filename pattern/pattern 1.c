#include <stdio.h>
void main()
{
    int i,c,j;
for(i=1;i<=5;i++)
{
    for(c=1;c<=5-i;c++)
    printf(" ");
    for(j=1;j<=i;j++)
         printf("*");
    printf("\n");  


}
}