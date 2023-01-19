#include <stdio.h>
#include <string.h>
#define size 4
int main()
{
    char string[size][30],search[30];
    printf("\nEnter %d string:",size);
    int i;
    for(i=size-1;i>0;i--)
    gets(string[i]);
    strlwr(string);
    puts("\nEnter searching string:");
    gets(search);
    strlwr(search);

    for(i=0;i<size;i++)
    {
        if(strcmp(string[i],search)==0)
        {
        puts("\nFound");
        break;
        }
    }
    if(i==size)
    puts("\nNot found");


}
