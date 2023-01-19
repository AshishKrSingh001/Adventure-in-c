#include <stdio.h>
#define size 5
void main(){
    int n[size],i,s,count=0;
    printf("\nEnter %d number:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    printf("\nEnter Searching element:\n");
    scanf("%d",&s);
    for(i=0;i<size;i++){
        if(n[i]==s){
        count++;
    }
    }
    printf("\nFound %d times",count);
}