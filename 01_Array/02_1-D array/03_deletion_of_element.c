#include<stdio.h>
void  deletion(int a[],int n,int loc){
    int deleted_item=a[loc];
    int i=loc;
    while(i<n-1){
     a[i]=a[i+1];
     i++;
    }
    n=n-1;
    printf("\ndeleted ite is:%d\n",deleted_item);
    printf("modified array\n");
    for(i=0;i<n;i++){
        printf("the index-no is %d and element is: %d\n",i,a[i]);
    }
}
int main(){
    int i,n,loc;
    int a[5]={10,87,67,98,90};
    n=5;

    printf("enter the lenght of array:");
    scanf("%d",&n);

     
    if(n>20){
        printf("it is invalid");
        return 0;
    }

    for(i=0;i<n;i++){  
        printf("enter the array elements %d:",i);
        scanf("%d ",&a[i]);
        
    }
    
    printf("\nenter the delete location:( 1 to %d): ",n-1);
    scanf("%d",&loc);
     
    deletion(a,n,loc);
    return 0;
}