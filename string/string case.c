#include <stdio.h>
void main()
{
    char str[30];
    puts("Enter string:");
    gets(str);
    //puts(str);

    //Length of string:
    int l;
    for(l=0;str[l]!='\0';l++);
    printf("Length of %s is %d\n",str,l);

    int i;
    //toggal case:
    for(i=0;str[i]!='\0';i++)
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    else if(str[i]>='a' && str[i]<='z')
    str[i]=str[i]-32;
    printf("\nIn Toggal case:%s\n",str);
    

    //Upper case:
    for(i=0;str[i]!='\0';i++)
    if(str[i]>='a' && str[i]<='z')
    str[i]=str[i]-32;
    printf("\nIn upper case:%s\n",str);
    

    //Lower case:
    for(i=0;str[i]!='\0';i++)
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    printf("\nIn lower case:%s\n",str);
    

    //Sentence case:
    if(str[0]>='a' && str[0]<='a')
    str[0]=str[0]-32;
    printf("\nIn Sentence case:%s\n",str);
    

    //Proper case:
    strlwr(str);
    str[0]=str[0]-32;
    for(i=1;str[i]!='\0';i++)
    if(str[i]==' ')
    {
        str[i+1]=str[i+1]-32;
        i++; 
    }  
    printf("\nIn Proper case:%s\n",str);
    

    //Abberiviation:
    strupr(str);
    for(i=l-1;i>=0;i--)
    if(str[i]==' ')
    break;
    printf("\nIn Abberiviation :%c",str[0]);
    for(int j=0;j<i;j++)
    if(str[j]==' ')
    printf(" %c",str[j+1]);
    for(int j=i;j<l;j++)
    printf("%c",str[j]);
    puts("\n");


    puts("\nEnd");


    





}