#include <stdio.h>
int main(){
    float a=12.223,b=13.243;
    printf("a=%f and b=%f\n",a,b);
    printf("a=%.2f and b=%.2f\n",a,b);
    printf("a=%10.2f and b=%10.2f\n",a,b);
    printf("a=%.3f and b=%.3f\n",a,b);
    printf("a=%10.3f and b=%10.3f\n",a,b);
    printf("a=%-10.3f and b=%-10.3f\n",a,b);
    return 0;
}