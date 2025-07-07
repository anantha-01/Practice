// Program to display transpose of a matrix

#include<stdio.h>
int main(){
    int i,j,rcount,ccount;
    printf("Enter No of rows & columns in array: ");
    scanf("%d%d",&rcount,&ccount);
    int mat[rcount][ccount];
    int matT[ccount][rcount];
    for (i=0;i<rcount;i++){                                    
        for(j=0;j<ccount;j++){
            printf("Enter element at position (%d,%d)\n",i,j);
            scanf("%d",&mat[i][j]);
            matT[j][i]=mat[i][j]; }}
    //Printing Original Matrix
    printf("\n");
    printf("Original Marix is:\n");                                      
    for (i=0;i<rcount;i++){                                    
        for(j=0;j<ccount;j++){
            printf(" %d ",mat[i][j]);}
        printf("\n");}

    //Printing Transpose Matrix
    printf("\n");
    printf("Transpose of the Matrix is:\n");                                      
    for (j=0;j<ccount;j++){                                    
        for(i=0;i<rcount;i++){
            printf(" %d ",matT[j][i]);}
        printf("\n");}
    return 0;
}