#include<stdio.h>
int main(){
    //Sum of two Matrices
    int i,j,nr,nc;
    printf("Enter no. of row & column: ");
    scanf("%d%d",&nr,&nc);
    int a[nr][nc],b[nr][nc],c[nr][nc];
    for (i=0;i<nc;i++){
        for(j=0;j<nr;j++){
            printf("Enter row%d & column%d elements: of a and b simultaneously:\n",i+1,j+1);
            scanf("%d%d",&a[j][i],&b[j][i])
            ;
            c[j][i]=a[j][i]+b[j][i];
        }
    }
    
    printf("New Matrix:\n");
    for (i=0;i<nc;i++){
        for(j=0;j<nr;j++){
            printf("%d\t",c[j][i]);
        }printf("\n");
    }
    return 0;
}