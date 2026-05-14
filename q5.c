#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character : \n");
    scanf("%c",&ch);
    if(ch >='a' && ch <='z'){
        printf("It is Lowercase");
    }
    else{
        printf("It is not Lowercase");
    }
    return 0;
}