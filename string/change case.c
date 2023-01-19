#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    puts("Enter strings:");
    gets(str);
    int i,l;
    l=strlen(str);
    for(i=0;i<l;i++)
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        puts(str);

        printf("\n");

    for(i=0;i<l;i++)
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    puts(str);
}