#include <stdio.h>
int hcf(int n1,int n2)
{
    int hcf=n1<n2?n2:n1;
    while(n1%hcf!=0 || n2%hcf!=0)
    hcf--;
    return hcf;

}
void check_co_prime(int n1,int n2)
{
    if(hcf(n1,n2)==1)
    printf("\nCo_prime\n");
    else
    printf("Not");
}

void main()
{
    check_co_prime(19,20);
}