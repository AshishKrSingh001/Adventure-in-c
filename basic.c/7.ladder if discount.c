#include<stdio.h>
#include<conio.h>
void main()
{
    int pm,discount,payable;
    printf("Enter purchasing amount");
    scanf("%d",&pm);
    
    if(pm>1000 && pm<=3000)
        payable=pm-(pm*10/100);
    else if(pm>3000 && pm<=5000)
        payable=pm-(pm*15/100);
       else if(pm>5000)
        
        payable=pm-(pm*15/100);
printf("payable amount is %d",payable);
}