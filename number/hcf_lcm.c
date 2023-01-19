#include <stdio.h>
int a,b,c,hcf,lcm;
int input();
int find_hcf();
int find_lcm();

void main()
{
    input();
    printf("\nH.C.F= %d",find_hcf());
    printf("\nL.C.M= %d",find_lcm());
}
int input()
{
    
    printf("\nEnter three number:\n");
    scanf("%d%d%d",&a,&b,&c);
}
int find_hcf()
{
    hcf=a<b && a<c ?a:(b<c?b:c);
    while(a%hcf!=0 || b%hcf!=0 || c%hcf!=0)
    hcf --;
    return hcf;
}
int find_lcm()
{
    lcm=a>b && a>c ?a:(b>c?b:c);
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
    lcm ++;
    return lcm;

}