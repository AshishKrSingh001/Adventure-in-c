#include <stdio.h>
void main(){
    int i;
    for(i=1;i<=5;i++){
        printf("%d",i);
        if(i==4)
        break;
    }
}