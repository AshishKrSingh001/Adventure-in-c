// WAP to take a number and return the table and factorial of the number.
 #include <stdio.h>
 int main(){
     int num,i=1;
     printf("Enter the number");
     scanf("%d",&num);
     printf("The factorial of %d is\n",num);
     do{
         if(num%i==0){
             printf("%d ",i);
         }
         i=i+1;
     }while(i<=num);
     int j=1;
     printf("\nTable of %d is given\n",num);
     do{
         printf("%dX%d=%d\n",num,j,num*j);
         j=j+1;
     }while(j<=10);
     return 0;
 }