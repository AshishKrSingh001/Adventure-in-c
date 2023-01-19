#include <stdio.h>
#include <string.h>
void main()
{
   char str[20];
   puts("Enter string:");
   gets(str);
   int i;
   for(i=0;str[i]!='\0';i++);
   printf("\nSize of string is %d",i);
   i=strlen(str);
   printf("\t\t%d",i);
}