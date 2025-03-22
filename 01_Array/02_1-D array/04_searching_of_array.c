#include<stdio.h>
int main(){
    int a[20],n,i,loc,item;
    n=5;
    printf("how many no you want to input:");
    scanf("%d",n);

    if(n>20){
        printf("invalid input\n");
        return 0;
    }

    for(i=0;i<n;i++){
        printf("enter the array %d is:",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter the element for which the location is to be searched:");
    scanf("%d",&item);

    for(i=0;i<n;i++){
        if(item==a[i]){
            loc==i;
            break;
        }
    }
    if(i==n){
        printf("\nitem is not found");
    }
    else{
        printf("\nitem is located at location=%d",i);
    }

    return 0;
}