#include<stdio.h>
int main(){
    int a[5];
    int sum=0,i,max,min;
    for(i=0;i<5;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("entered the element %d:",a[i]);
    }

    i=0;
















































































































































































































    
    max=a[i];
    min=a[i];
    for(i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Max: %d, Min: %d",max, min);
    return 0;
}