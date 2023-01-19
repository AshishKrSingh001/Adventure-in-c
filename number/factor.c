#include <stdio.h>
int main(){
    int num,i=1;
    printf("number daal:");
    scanf("%d",&num);
    printf("\nfactors of %d\n",num);

    // for(i=1;i<=num;i=i+1){
    //     if(num%i==0){
    //     printf("%d\t",i);
    //     }
    // }

    // do{
    //     if(num%i==0){
    //         printf("%d\t",i);
    //     }
    //         i=i+1;
    // }while(i<=num);

    while(i<=num){
        if(num%i==0){
            printf("%d\t",i);
        }
        i=i+1;
    }
    
    return 0;
}