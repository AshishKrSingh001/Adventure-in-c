//Break statement:
//Break statement can be used with:
//  -Loop
//  -Switch case expression
//Break statement are mostely used after the condition,if the condition is true then iteration of loop will be break.

#include <stdio.h>
int main()
{
 printf("hello world\n");
 int i;
 for(i=0;i=10;i++){
     printf("Enter your age");
     scanf("%d",&i);
     if(i>10){
         break;
     }
 }
    return 0;
}
