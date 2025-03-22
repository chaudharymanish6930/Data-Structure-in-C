#include<stdio.h>
void reverse(int a[20],int n){
    int i=0,j=n-1,temp;
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    
}
int main(){
    int a[20],n;
    printf("enter the length of array:");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    reverse(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}