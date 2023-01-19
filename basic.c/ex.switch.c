//WAP to input your total marks and see what percent you get.
#include <stdio.h>
int main(){
  char o;
  double n1,n2;
  printf("enter a valid arithmetic operation\n");
  scanf("%c",&o);
  printf("Enter first number\n");
  scanf("%lf",&n1);
  printf("Enter second number\n");
  scanf("%lf",&n2);
  switch(o)
  {
      case '+':
         printf("Addition: %.1lf\n",n1+n2);
         break;
      case '-':
      printf("Subtraction: %.1lf\n",n1-n2);
      break;
      case '*':
      printf("Multiplication: %.1lf\n",n1*n2);
      break;
      case '/':
      printf("Division: %.1lf\n",n1/n2);
      break;
      default:
      printf("Invalid operatior");
       
  }
    return 0;
}
