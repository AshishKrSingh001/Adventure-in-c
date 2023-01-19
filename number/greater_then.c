#include <stdio.h>
int a,b,c,d;
void input(){
    printf("\nenter four number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
}
int greatestnum(){
    int x;
    x=a>b && a>c && a>d?a:(b>c && b>d ?b:c>d?c:d);
    return x;
}
void main(){
    
   input();
   printf("greatest number is %d",greatestnum());  

}
