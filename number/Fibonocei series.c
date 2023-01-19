#include <Stdio.h>
void main(){
    int a,b,c,n,i;
    printf("\nEnter first two term:");
    scanf("%d%d",&a,&b);
    printf("Enter terms:");
    scanf("%d",&n);

    printf("%5d%5d",a,b);
    for(i=1;i<=n;i++){
            c=a+b;
            printf("%5d",c);
            a=b;
            b=c;
    }

    /*for(i=1;i<=n;i++){
        printf("%5d",a);
        c=a+b;
        a=b;
        b=c;
    }*/

}