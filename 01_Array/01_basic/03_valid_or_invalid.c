#include<stdio.h>
int main(){
    int a[20],n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
    }
    else{
        printf("it is valid");
    }
    return 0;
}