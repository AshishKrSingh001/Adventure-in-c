#include <stdio.h>
void main(){
char str[50];
int i,l;
puts("enter string: ");
gets(str);
l= strlen(str);
if (str[0]>=97 && str[0]<=122)
str[0]=str[0]-32;
for(i=1;i<l;i++)
if(str[i]>=65 && str[i]<=90)
str[i]=str[i]+32;
puts(str);
}