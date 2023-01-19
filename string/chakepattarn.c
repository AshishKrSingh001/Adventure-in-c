#include <stdio.h>
void main()
{
char str[30];
int r,c,s,l;
puts ("enter string: ");
gets(str);
l=strlen(str);
for(r=0;r<l;r++){

    for(s=0;s<l-r;s++)
    printf(" ");
    for(c=0;c<=r;c++)
    printf("%c",str[c]);
    printf("\n");
}
}
