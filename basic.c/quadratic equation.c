#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,v1,v2;
    printf("Enter three coefficient:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>=0){
        v1=(-b+sqrt(d))/(2*a);
        v2=(-b-sqrt(d))/(2*a);
        printf("First value=%.4f\nSecond value=%.4f",v1,v2);
    }
    else{
        printf("Value is not define");
    }
    return 0;
}