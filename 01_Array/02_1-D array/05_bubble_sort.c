#include<stdio.h>
int main(){
    int a[20],n,temp;

    printf("enter the lenght of array:");
    scanf("%d",&n);

    if(n>20){
        printf("it is invalid");
    }
    
    for(int i=0;i<n;i++){
        printf("enter the array %d =",i+1);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}