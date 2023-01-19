// This is comment

// include keyword used to include stdio.h function.

#include <stdio.h> 

int main() {
    
    int a, b;
    
    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b );
    
    int sum = a + b;
    
    printf("Addition : %d", sum);

    return 0;
}