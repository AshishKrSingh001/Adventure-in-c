#include <stdio.h>
int main()
{
    int a=8;
    int b=8;
    if(a>b){
        printf("%d is greater then %d",a,b);
    }
    else if(a==b){
        printf("%d is equal to %d",a,b);
    }
    else{
        printf("%d is greater then %d",b,a);
    }
    return 0;
}