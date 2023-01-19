#include <stdio.h>
int main(){
    int table;
    printf("Enter the number");
    scanf("%d",&table);
    printf("\nTable using do while loop\n");
    int i=1;
    do{
        printf("%dX%d=%d\n",table,i,table*i);
        i=i+1;
    }while(i<=10);
    printf("\nTable using while loop\n");
    int j=1;
    while(j<=10){
      printf("%dX%d=%d\n",table,j,table*j);
        j=j+1;
    }
    printf("\nTable using for loop\n");
    int k;
    for(k=1;k<=10;k=k+1){
        printf("%dX%d=%d\n",table,k,table*k);
    }
    
        return 0;
}