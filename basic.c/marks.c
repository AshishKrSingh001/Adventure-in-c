#include <stdio.h>
int main(){
    float marks;
    printf("enter marks");
    scanf("%f",&marks);
    if(100>marks && marks>=80){
        printf("distintion");
    }
    else if(80>marks && marks>=60){
        printf("first");
    }
     else if(60>marks && marks>=45){
        printf("second");
    }
     else if(45>marks && marks>=30){
        printf("third");
    }
    else{
        printf("fail!");
    }
    return 0;
    }

