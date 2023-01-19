#include <stdio.h>
void main(){
    char str [30];
    int i,v=0,sp=0,c=0;
    puts("enter string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        switch(str[i])
        {
            case('A'):
            case('a'):
            case('E'):
            case('e'):
            case('I'):
            case('i'):
            case('O'):
            case('o'):
            case('U'):
            case('u'):
            v++;
            break;
            case' ':
            sp++;
            break;
            default:
            c++;

        }
    }
    printf("\n Total vowels=%d\nTotal consonent=%d\nTotal space=%d",v,c,sp);
}