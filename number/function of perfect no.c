 #include <stdio.h>
// int perfect(int num){
//     int n, i=1;
//     while((num/2)==i){
//         n=0;
//         if(num%i==0){
//             n=n+i;
//         }
//         i++;
//     }
//     return n;
// }
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int n=0, i=1;
    while(i<=(num-1)){
        if(num%i==0){
            n=n+i;
        }
        i++;
    }
    if(num==n){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is a not perfect number",num);
    }
    return 0;
}