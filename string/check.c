#include <stdio.h>
void main()
{
    char str[20];
    char ch;
    int i=0;
    while((ch=getche())!='$')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("\nyour string=%s",str);
}
