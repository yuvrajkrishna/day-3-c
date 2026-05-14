#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter Number 1 : \n");
    scanf("%d",&a);
    printf("Enter Number 2 : \n");
    scanf("%d",&b);
    printf("Enter Number 3 : \n");
    scanf("%d",&c);
    printf("Enter Number 4 : \n");
    scanf("%d",&d);
    if(a > b && a > c && a > d){
        printf("a is great");
    }
    else if(b > a && b > c && b > d ){
        printf("b is great");
    }
    else if(c > a && c > b && c > d ){
        printf("c is great");
    }
    else{
        printf("d is great");
    }
    return 0;
}