#include <stdio.h>
#include <string.h>

char *u_case(char str[])
{
    for(int i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        return str;
}
char  *l_case(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    return str;
}
char *p_case(char str[])
{
    l_case(str);
    str[0]=str[0]-32;
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i+1]=str[i+1]-32;
            i++;
        }
    
    }
    return str;
}
char *t_case(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
    return str;

}
void a_case(char string[])
{
    int i,j; 
    int l=strlen(string);
    strupr(string);
    for(i=l-1;i>=0;i--)
    if(string[i]==' ')
    break;
    printf("%c.",string[0]);
    for(j=1;j<i;j++)
    if(string[j]==' ')
    printf("%c.",string[j+1]);
    for(j=i+1;j<l;j++)
    printf("%c",string[j]);
}

void main()
{
    char string[30];
    puts("Enter strings:");
    gets(string);
    printf("\nIn Upper case %s",u_case(string));
    printf("\nIn Lower case %s",l_case(string));
    printf("\nIn Proper case %s",p_case(string));
    printf("\nIn Toggle case %s",t_case(string));
    printf("\nIn Abbreviation format ");
    a_case(string);
    
    
    
    
}