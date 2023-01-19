#include <stdio.h>
void main()
{
    char str[20];
    int i;
    puts("Enter string:");
    gets(str);

    // by using function of strlwr:
    strlwr(str);
    str[0]=str[0]-32;
    puts(str);

    //without using any function:
    
}