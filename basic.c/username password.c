#include <stdio.h>
int main(){
    char username[10],password[10];
    char USERNAME[10]="Ashish",PASSWORD[10]="ashish123";

    printf("Enter username");
    scanf("%s",username);

   // int cmp1=strcmp(USERNAME, username);
    int cmp1 = strcmp (USERNAME, username);

    if(cmp1==0){
        printf("Enter password");
        scanf("%s",password);

        int cmp2=strcmp(password,PASSWORD);
        if(cmp2==0){
            printf("Login successfully");
        }

        else{
            printf("Password is not correct");
    }
    }

    else{
        printf("Username is not correct");
    }

    return 0;
}