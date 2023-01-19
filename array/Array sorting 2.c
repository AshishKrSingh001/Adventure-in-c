#include <stdio.h>
#define size 5
void main(){
    char str[size][30];
    char temp[30];
    int i,j;
    printf("\nEnter %d string\n",size);
    for(i=0;i<size;i++)
    gets(str[i]);

    for(i=0;i<=size-1;i++){
        for(j=i+1;j<size-i;j++){
          if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
           }
        }
    }
    printf("\n");
    for(i=0;i<=size-1;i++)
    puts(str[i]);
}