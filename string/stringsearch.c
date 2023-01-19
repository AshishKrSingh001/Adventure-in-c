#include <stdio.h>
#include <string.h>
#define size 10
int main()
{
    char string[size][30],search[30];
    printf("\nEnter %d string:\n",size);
    for(int i=size-1;i>0;i--)
    gets(string[i]);
    strlwr(string);
    puts("\nEnter searching string:");
    gets(search);
    strlwr(search);

    int min=0,max=size-1,mid;
    while(max>=min)
    {
        mid=(max+min)/2;
        if(strcmp(string[mid],search)==0)
        {
            puts("\nFound");
            break;
        }
        if(strcmp(string[mid],search)>0)
        min=mid+1;
        if(strcmp(string[mid],search)<0)
        max=mid-1;
    }
    if(min>max)
    puts("\nNot found");


}
