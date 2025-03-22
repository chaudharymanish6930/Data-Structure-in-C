#include<stdio.h>
int main(){
    int a[20],b[20],c[40];
    int n,m;
    printf("enter the lenght of 1st array:");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("enter %d no: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter the length of 2nd array:");
    scanf("%d",&m);
    if(m>20){
        printf("it is invalid");
        return 0;
    }
    for(int i=0;i<m;i++){
        printf("enter %d no:",i+1);
        scanf("%d",&b[i]);
    }

    // concatination of two array
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=0;i<m;i++){
        c[i+n]=b[i];
    }
     
    printf("the concatinate array:\n");
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}