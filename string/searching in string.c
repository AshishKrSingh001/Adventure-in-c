#include <stdio.h>
#define size 5
void main(){
    char str[size][30];
    char srh[30];
    int i,j;
    printf("\nEnter %d string:\n",size);
    for(i=0;i<size;i++)
    gets(str[i]);
    printf("\nEnter searching element:\n");
    gets(srh);

    for(i=0;i<size;i++)
    {
        if(strcmp(str[i],srh)==0)
        {
            printf("\nFound");
            break;
        }
    }
    if(i==size)
    printf("\nNot found");
}