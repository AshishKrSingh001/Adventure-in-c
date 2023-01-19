// Factorial number:
#include <stdio.h>
int main(){
    printf("if you want to convert \nkilometer into miles type 1\nfoot into inches type 2\npound into kilogram type 3\nif you want to reverse tyoe in negative\n");
int b,a;
printf("Enter what you want to do");
scanf("%d",&b);
printf("Enter the value");
scanf("%d",&a);
switch(b){
case 1:
printf("convert %d kilometer into miles is%lf",a,a*0.62);
break;
case -1:
printf("convert %d miles into kilometer is%lf",a,a*1.6);
break;
case 2:
printf("convert %d foot into inches is%d",a,a*12);
break;
case -2:
printf("convert %d inches into foot is%lf",a,a*0.08);
break;
case 3:
printf("convert %d pound into kilogram is%lf",a,a*0.45);
break;
case-3 :
printf("convert %d kilogram into pound is%lf",a,a*2.2);
break;
default:
printf("typed number is invalid");
    
}
return 0;
}