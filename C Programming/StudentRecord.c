//Record of n students (rollno,name,marks,grade)
#include<stdio.h>
#include<string.h>
struct Students{
    int rollno;
    char name[30];
    float marks;
    char grade[8]; 
};
int main(){
    int records,i;
    printf("Enter Number of Records to input: ");
    scanf("%d",&records);
    struct Students s[records];
    while (i!=records){
        printf("Enter Name: ");
        scanf("%s",&s[i].name);
        printf("Enter rollno: ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("Enter grade:");
        scanf("%s",&s[i].grade);
        printf("----------------------------\n");
        i++;
    } 
    i=0;
    printf("\n-----Students are----\n");
        while (i!=records){
        printf("Name:\n");
        printf("%s\n\n",s[i].name);
        printf("Rollno:\n");
        printf("%d\n\n",s[i].rollno);
        printf("Marks:\n");
        printf("%f\n\n",s[i].marks);
        printf("Grade:\n");
        printf("%s\n\n",s[i].grade);
        printf("----------------------------\n");
        i++;
    } 
    return 0;
}