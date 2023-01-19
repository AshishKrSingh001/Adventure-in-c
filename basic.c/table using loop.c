#include <stdio.h>
int main()
{
    int num,i,j=1,k=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nUsing for loop");
    for(i=1;i<=10;i++){
        printf("\n%dXi=%d",num,num*i);
    }
     printf("\nUsing while loop");
    while(j<=10){
        printf("\n%dXj=%d",num,num*j);
        j=j+1;
    }
     printf("\nUsing do while loop");
    do{
        printf("\n%dXk=%d",num,num*k);
        k=k+1;
    }while(k<=10);
    return 0;
}