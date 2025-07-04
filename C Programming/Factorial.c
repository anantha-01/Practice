#include<stdio.h>
int Factorial(int num){
    if (num==1 || num==0){
        return 1;
    }
    else {
        return (num*(Factorial(num-1)));
    }
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    printf("%d",Factorial(num));
}