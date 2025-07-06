/*Write a C program that reads from the user an arithmetic operator and 
two operands, perform the corresponding arithmetic operation on the 
operands using switch statement*/

#include<stdio.h>
#include<math.h>
int main(){
    float op1,op2,result;
    char operator;
    printf("Enter two operands:\n");
    scanf("%f%f",&op1,&op2);
    printf("Enter the Operator:");
    scanf(" %c",&operator);
    switch (operator)
    {
    case ('+') :
        result= op1+op2;
        printf("%0.2f\n",result);
        break;
    case ('-') :
        result= op1-op2;
        printf("%0.2f\n",result);
        break;
    case ('*') :
        result= op1*op2;
        printf("%0.2f\n",result);
        break;
    case ('/') :
        if (op2==0){printf("Zero division error!");break;} 
        result= ((float)op1)/op2;
        printf("%0.2f\n",result);
        break; 
    case ('%'):
       if (op2==0){printf("Zero division error!");break;} 
       result=fmod(op1,op2);
       printf("%0.2f",result);
       break;

    default :
        printf("Invalid Operator");
        break;
    }
}