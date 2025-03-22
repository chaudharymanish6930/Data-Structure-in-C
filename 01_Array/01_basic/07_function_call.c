#include<stdio.h>
void traverse(int a[],int n){
    int k=0;
    while(k<n){
        printf("\n%d",a[k]);
        k++;
    }
}
void main(){
    int a[20],i,n;
    printf("\n enter the number of array:");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
    }
    for(i=0;i<n;i++){
        printf("\nenter the number:%d",i+1);
        scanf("%d",&a[i]);
    }
    traverse(a,n);
    return ;
}