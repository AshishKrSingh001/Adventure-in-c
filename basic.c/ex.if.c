// WAP to distribute a gift who passed in math and science or math or science.If a person passed in both then he will get a phone,if he only passed in science then he will get a videogame,if he passed in math only then he will get a bat.
#include <stdio.h>
int main(){
    char a[10];
    char m[10]="math";
    char s[10]="science";
    printf("enter in which subject you have passed\nmath for math\nscience for science\nand both for both\n");
    scanf("%s",a);
    int c1=strcmp(a,m);
    int c2=strcmp(a,s);
    if(c1==0){
        printf("congratulation you have passed in math so you have got a bat ");
    }
    else if(c2==0){
        printf("congratulation you have passed in science so you have got a videogame");
    }
    else{
        printf("congratulation you have passed in both so you have got a phone ");
    }
    return 0;
}