#include<stdio.h>
int main(){
    int i,n,elem;
    printf("Enter number of Array elements: ");scanf("%d",&n);//Number of array elements 
    int arr[n];
    printf("Enter Elements in order:\n");for (i=0;i<n;i++)scanf("%d",&arr[i]);//Reading Array elements
    printf("Enter the element to locate: ");scanf("%d",&elem);//Element to locate
    int low=0,high=n-1,mid;
    while (1){
        mid=(low+high)/2;
        if (arr[mid]==elem){
            printf("Element Located at position %d",mid);
            return 0;
                          }
        else if (arr[mid]>elem){
            high=mid-1;
                               }
        else if (arr[mid]<elem){
            low=mid+1;
                               }
        }
    return 0;
}