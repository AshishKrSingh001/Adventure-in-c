#include<stdio.h>
#include<conio.h>
void main()
{
    int cr,pr,tu,amt;
    printf("Enter previous reading");
    scanf("%d",&pr);
    printf("Enter current reading");
    scanf("%d",&cr);
    tu=cr-pr;
    if(tu>0 && tu<=100){
        amt=tu*5;
    }
    else if(tu>100 && tu<=200){
        amt=(100*5)+((tu-100)*6);
    }
    else if(tu>200 && tu<=400){
        amt=(100*5)+(100*6)+((tu-200)*7);
    }
    else if(tu>400){
        amt=(100*5)+(100*6)+(200*7)+((tu-400)*8);
    }
    printf("Your bill is %d",amt);
    
    
    getch();
}