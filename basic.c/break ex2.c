#include <stdio.h>
void main(){
    int n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        printf("Not prime");
        break;
    }
    if(n==i)
    printf("Prime");
}