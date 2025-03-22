#include<stdio.h>
void deletion(int a[],int len,int location){
    for(int i=location;i<len;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<len-1;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[10],len,location;

    printf("enter the lenght of array:");
    scanf("%d",&len);
    
    printf("enter the element\n");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }

    printf("enter the loc. you want to delete element:");
    scanf("%d",&location);

    deletion(a,len,location);
    return 0;
}