//To find nCr
#include<stdio.h>
#include<stdlib.h>

int Factorial(int var){
    int result=1;
    if (var==0 || var==1){
        return 1;
    }
    else result= var * Factorial(var-1);
}
int main(){
    int n,r,result;
    printf("Enter value of N: ");
    scanf("%d",&n);
    printf("\nEnter value of r: ");
    scanf("%d",&r);
    if (n<r){printf("Error, value of N cannot be greater than r.\n\n");}
    exit(1);
    printf("Value of nCr is: \n");
    printf("%d",Factorial(n)/(Factorial(n-r)*Factorial(r)));
    return 0;
}