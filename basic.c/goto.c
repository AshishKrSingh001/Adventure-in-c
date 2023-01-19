// Goto statement:
// -Also called jump statement.
// -Used to tranfer program control to predefined lebel.

#include <stdio.h>
int main(){
    label:
    printf("hello world");
  goto end;
    printf("\nhi this is ashish\n");
    goto label;
     end:
      printf("\nhello world ashish\n");
    
}