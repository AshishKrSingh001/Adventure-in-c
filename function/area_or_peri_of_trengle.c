#include <stdio.h>
int l,b,area,peri;//global var
void input()
{
    printf("enter length & breath ");
    scanf("%d%d",&l,&b);

}
void findarea()
{
    area= l*b;

}
void findperi()
{
    peri=2*(l+b);

} 
void display()
{
    printf("length=%d\nbreadth=%d\narea=%d\nperimeter=%d",l,b,area,peri);

}
void main(){
    input();
    findarea();
    findperi();
    display();
}