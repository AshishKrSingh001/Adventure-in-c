// wap in c to input three numbers  after that find geatest using return type function.
#include <stdio.h>
int a,b,c;
void input(){
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

}
int findgreatest()
{
    int gt;//local variable
    gt=a>b && a>c?a:(b>c?b:c);
    return(gt);
}
    void main(){
        input();
        printf("geatest no=%d",findgreatest());
        
    }
