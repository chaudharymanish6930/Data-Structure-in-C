#include<stdio.h>
void swaping(int a[20],int b[20],int n){
    int temp;
    for(int i=0;i<n;i++){
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
int main(){
    int a[20],b[20],n,m;
    printf("enter the lenght of 1st array:");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("entre the lenght of 2nd array:");
    scanf("%d",&m);
    if(n>20){
        printf("it is invalid");
        return 0;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    if(n!=m){
        printf("it is not possible");
        return 0;
    }
    
    // function call
    swaping(a,b,n);

    printf("after swaping of 1st array");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nafter swaping 2nd array");
    for(int i=0;i<m;i++){
        printf("%d ",b[i]);
    }
    return 0;
}