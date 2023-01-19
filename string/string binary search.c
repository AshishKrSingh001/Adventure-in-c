#include <stdio.h>
#include <string.h>
#define size 4

int main()
{
    char string[size][30],search[30];
    char temp[30];
    printf("\nEnter %d string:\n",size);
    for(int i=0;i<size;i++)
    gets(string[i]);
    
     // For sorting
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(strcmp(string[i],string[j])>0)
            {
                strcpy(temp,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],temp);
            }
        }
    }
    for(int a=0;a<size;a++)
    puts(string[a]);

    //For searching

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
