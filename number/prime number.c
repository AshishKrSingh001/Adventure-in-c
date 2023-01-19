//WAP to input any two number and seperate the prime and composite number 
#include <stdio.h>
void main(){
    
    printf("Enter two number and this will show prime number and composite number between them.\n");
    
    int f_num,l_num;
    printf("Enter first number:");
    scanf("%d",&f_num);
    printf("Enter second number:");
    scanf("%d",&l_num);

    printf("\nThe prime number between %d and %d\n",f_num,l_num);
    int k=0,l=0,a=0;
    for(k=f_num;k<=l_num;k=k+1){
        int p=0;
        for(l=1;l<=k;l=l+1){
            if(k%l==0){
                p=p+1;
            }
        }
        if(p<=2 && k>1){
            a=a+1;
            printf(" %d\t",k);
        }
    }
    printf("\nThe no of prime number between %d and %d is %d\n",f_num,l_num,a);

    printf("\nThe composite number between %d and %d\n",f_num,l_num);
    int i=0,j=0,b=0;
    for(i=f_num;i<=l_num;i=i+1){
        int o=0;
        for(j=1;j<=i;j=j+1){
            if(i%j==0){
                o=o+1;
            }
        }
        if(o>2){
            b=b+1;
            printf(" %d\t",i);
        }
    }
    printf("\nThe no of prime number between %d and %d is %d\n",f_num,l_num,b);
    return 0;
}