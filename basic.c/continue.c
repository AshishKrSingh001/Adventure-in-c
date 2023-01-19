// Used to bring the program control to the next iteration of loop.
//Continue statement are mostly used after the condition,if the condition is true then the loop will skip to the next iteration.
#include <stdio.h>
int main()
{
 printf("hello world\n");
 int i;
 for(i=0;i=10;i++){
     printf("Enter your age");
     scanf("%d",&i);
     if(i>10){
         continue;
     }
      printf("hello world\n");
 }
    return 0;
}
