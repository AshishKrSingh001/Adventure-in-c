#include <stdio.h>
int main()
{
    char inputusername[10];
    char inputpassword[10];
    char username="ashish";
    char password="passward1";
    print("enter username");
    scanf("%s",inputusername);
    if(inputusername==username){
        printf("username %s is correct",inputusername);
    }
    else{
        printf("username %s is not correct",inputusername);
    }
    
}