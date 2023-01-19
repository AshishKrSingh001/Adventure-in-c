#include <stdio.h>

int main() {

    char InputUsername[10];
    char InputPassword[10];
    
    char username[10] = "ashish";
    char password[10] = "ashish1234";
    
    printf("Welcome To the Ashish's Database!\n");
    printf("Enter Your Username: ");
    
    scanf("%s", InputUsername);

    int compare1 = strcmp(InputUsername, username);
    
    if (compare1 == 0) {
        
        printf("Enter your Passowrd: ");
        
        scanf("%s", InputPassword);

        int compare2 = strcmp(InputPassword, password);
        
        if (compare2 == 0) {
            
            printf("Login successfully");
        }
        
        else {
            printf("Wrong Password!");
        }
    }
    
    else {
        
        printf("Wrong Username!");
    }

    return 0;
}
