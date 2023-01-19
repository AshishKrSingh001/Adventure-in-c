// WAP to input any number and give the result as power.
#include <stdio.h>
int main(){
    int a,i=1,k=1;
    printf("Enter any number:");
    scanf("%d",&a);
    while(i<=5){
        k=k*a;
        printf("Power of %d on %d is %d\n",i,a,k);
        i++;
    }
    // double m=1,j=-1;
    // while(j>=-5){
    //     m=m/a;
    //     printf("Power of %d on %d is %lf\n",j,a,m);
    //     j=j-1;
    // }
    return 0;
}