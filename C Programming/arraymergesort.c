#include<stdio.h>
void main(){
    int i,j,k,n1,n2,n3,temp,index=0;
    printf("Enter no. of elements in array1:\n");
    scanf("%d",&n1);
    printf("Enter no. of elements in array2:\n");
    scanf("%d",&n2);
    n3=n1+n2;
    int a[n1],b[n2],c[n3];

    printf("Elements of Array1: ");
    for(i=0;i<n1;i++){
            scanf("%d",&a[i]);
            c[i]=a[i];
                     }
    printf("Elements of Array2: ");
    for(j=0;j<n2;j++){
            scanf("%d",&b[j]);
            c[j+n1]=b[j];
                     }

    printf("Merged Array is:\n");
    for(i=0;i<n3;i++){
        printf("%d\t",c[i]);
    }
printf("\n");
for(i=0;i<n3;i++){
    for(j=0;j<n3-i-1;j++){
        if (c[j]>c[j+1]){
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
        }
    }
}
printf("The Merged & Sorted Array is: \n");
for (i=0;i<n3;i++){
        printf("%d\t",c[i]);
}
}
