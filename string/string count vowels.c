#include <stdio.h>
void main(){
    char str[20];
    int i,v=0;
    puts("\nEnter string:");
    gets(str);
    for(i=0;str[i]!=0;i++){
        switch(str[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            v++;
            break;

        }
    }
    printf("Total vowels=%d",v);
}