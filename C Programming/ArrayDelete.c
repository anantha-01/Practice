#include<stdio.h>
int main(){
    int num,delpos,i;
    printf("Enter Number of elements in the Array:\n");
    scanf("%d",&num);
    int a[num];
    printf("Enter Elements:\n");
    for (i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("The Array is:\n");
    for (i=0;i<num;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter the position of element to be deleted:\n");
    scanf("%d",&delpos);
    for (i=delpos;i<num;i++){
        a[i]=a[i+1];
    }

    printf("The New Array is:\n");
        printf("New Array:\n");
    for (i=0;i<num-1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
