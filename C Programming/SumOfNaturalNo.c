/*Write a C Program to find the sum of natural numbers from 1 to N using 
while loop*/
#include<stdio.h>
int main(){
    int i=1,N,result=0;
    printf("Enter value of last natural number: ");
    scanf("%d",&N);
    while(i<=N){
        result+=i;
        if (i==N)break;
        i++;
    }
    printf("The Result is: %d",result);
    return 0;
}