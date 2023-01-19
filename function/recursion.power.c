// Recursion:
// It is the process in which a function calls itself directly or indirectly.

#include <stdio.h>
int power(int base,int expo){
    if(expo==1){
        return base;
    }
    else{
        return base*power(base,expo-1);
    }
    }
    int main(){
    int n,m;
    printf("Enter base:");
    scanf("%d",&n);
    printf("Enter exponent:");
    scanf("%d",&m);
    printf("%d power on %d is %d",m,n,power(n,m));
    return 0;
}