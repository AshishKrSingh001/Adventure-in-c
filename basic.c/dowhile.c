// Types of loop:
// 1.   do while loop
// 2.   while loop
// 3.   for loop

//Do while loop: do while loop execute at least once.
 #include <stdio.h>
 int main(){
     int num ,index=0;
     printf("Enter a number");
     scanf("%d",&num);
     do
     {
         printf("%d\n",index);
         index=index+1;
     }while(index<num);
     return 0;
 }