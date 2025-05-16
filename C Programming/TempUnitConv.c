#include<stdio.h>
int main(){
int cond=1;
float val;
char unit;   
    while (cond==1){
    printf("Enter unit, F/C?: ");
    scanf(" %c",&unit);
    switch(unit){
    case'F':
    case'f':
    printf("Enter Value: ");
    scanf("%f",&val);
    val=(val-32)*((float) 5/9);
    printf("The Temp is %f celcius",val);
    cond=0; 
    break;

    case'C':
    case'c':
    printf("Enter value: ");
    scanf("%f",&val);
    val=((val*((float) 9/5))+32);
    printf("The Temp is %f farenheit",val); 
    cond=0;
    break;
    
    default:
    printf("Wrong Unit\n");

} 

    }
}