#include<stdio.h>
#include<string.h>
void strReverse(char s[4]){

    int i=0,j=strlen(s)-1;
    char temp;
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
    
}


int main(){
    char str[4]="cse";
    strReverse(str);
    return 0;
}