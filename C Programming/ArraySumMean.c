#include<stdio.h>
int main(){
    int sum=0,i=0,length; 
    float mean;
    int array[]={12,24,36,48,60};
    length = sizeof(array)/sizeof(array[0]);
    while (i!=length){
        sum+=array[i];
        i++;
    }
    printf("%d",i);
    printf("The sum is: %d\n",sum);
    printf("The Mean is: %0.3f",((float)sum/(i)));
    return 0;
}