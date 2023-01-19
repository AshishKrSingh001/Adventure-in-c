#include <stdio.h>
void main(){
    int n1,n2,s1=0,s2=0,i;
    printf("\nEnter two numbers:");
    scanf("%d%d",&n1,&n2);

    for(i=1;i<n1;i++){
        if(n1%i==0)
        s1=s1+i;
    }

    for(i=1;i<n2;i++){
        if(n2%i==0)
        s2=s2+i;
    }

    if(s1==n2 && s2==n1)
    printf("Amicable");
    else
    printf("Not amicable");

}