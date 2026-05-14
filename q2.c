#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the marks of Subject 1 : \n");
    scanf("%d",&s1);
    printf("Enter the marks of Subject 2 : \n");
    scanf("%d",&s2);
    printf("Enter the marks of Subject 3 : \n");
    scanf("%d",&s3);
    int total  = (s1 + s2 + s3)/3;
    if(s1 >= 33 && s2>=33 && s3>=33 && total >= 40 ){
        printf("You passed Successfully");
    }
    else{
        printf("You failed");
    }
    return 0;
}