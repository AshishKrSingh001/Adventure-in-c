// <stdio.h> is pre defined file used to run c program.
//#include is used to insert the file <stdio.h>.
// main() function returns int when we run a program.
// int function collect the integer from main function.
// printf is used to print the output .
// scanf is used when we insert the input from the console.
// %d represents to denote the integer.
// \n is used to change the line.
// return 0 is used to terminate the program successfully.
 #include <stdio.h>
 int main(){
     int a,b,c;
     printf("enter two number \n");
     scanf("%d%d",&a,&b);
    //  printf("enter number b\n");
    //  scanf("%d",&b);
    c=a+b;
     printf("the sum of %d and %d is %d" ,a,b,c);
     return 0;
 }
