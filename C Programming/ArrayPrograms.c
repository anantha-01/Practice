/*Write a C program to read N integers into an array A and to find the 
(i)sum of odd numbers(ii) sum of even numbers(iii) average of all 
numbers. Output the results computed with appropriate headings */
#include<stdio.h>
int main(){
    int i,N,oddS=0,evenS=0;
    float avg=0;
    printf("Enter Number of Elements in Array:");
    scanf("%d",&N);
    int arr[N];
    //Reading Array Elements
    printf("Enter Elements in array:");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    //

    //Storing Values required
    for(i=0;i<N;i++){
        avg+=arr[i];
        if((arr[i]%2)==0){
            evenS+=arr[i];
        }
        else if((arr[i]%2)!=0){
            oddS+=arr[i];
        }}
    printf("\n\n");
    printf("Sum of all even Numbers is:\n%d\n",evenS);
    printf("Sum of all odd Numbers is:\n%d\n",oddS);
    printf("Average of all Numbers is:\n%0.4f\n",(avg/N));
    return 0;
}