
#include <stdio.h>
int main(){
    printf("welcome to Ashish database\n");
    char USERNAME[20]="ashish";
    char PASSWORD[20]="ashish1234";
    char u[20];
    char p[20];
    printf("enter username:");
    scanf("%s",u);
    int compare1=strcmp(USERNAME,u);
    if(compare1==0){
         printf("\nenter password:");
         scanf("%s",p);
         int compare2=strcmp(PASSWORD,p);
         if(compare2==0){
             printf("login successfully");
         }
         else{
             printf("\nyour password is incorrect");
         }
    }
    else{
        printf("\nyour username is incorrect");
    }
    return 0;
}