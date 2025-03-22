#include<stdio.h>
void insert(int a[],int n,int loc, int item){
    int i=n;
    while(i>loc){
        // a[i]=a[i-1]
        a[i+1]=a[i];
        i--;
    }
    a[loc]=item;

}
int main(){
    int a[20],i,n,item,loc;
    printf("\nenter number of elements:");
    scanf("%d",&n);
    
    if(n>20){
        printf("it is not vaiild");
        return 0;
    }

    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nenter  item to be insert:");
    scanf("%d",&item);

    printf("enter the location:");
    scanf("%d",&loc);

    insert(a,n,loc,item); // &a[0] OR a both are same
    // n=n+1 OR i<=n
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}