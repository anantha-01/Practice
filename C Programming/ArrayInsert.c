#include<stdio.h>
int main(){
    int i,j,n,nelem,nposi,temp,cond=1;
    printf("Enter no. of elements in Array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements in Array:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while (cond==1){
        printf("Enter (new element,new position):\n");
        scanf("%d%d",&nelem,&nposi);
        for (i=(nposi-1);i<n;i++){
            temp=a[i];
            a[i]=nelem;
        printf("The New Array is:\n");
        for (i=0;i<n;i++){
        printf("%d\t",a[i]);
                         }
        printf("\n");
        printf("Wanna add more?(0,1)\n");
        scanf("%d",&cond);
        }
    }
    
    return 0;
}