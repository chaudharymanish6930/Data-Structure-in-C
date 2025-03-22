#include<stdio.h>
int main(){
    int a[20],b[20],c[40];
    int n,m;
    printf("enter the length 1st array: ");
    scanf("%d",&n);
    if(n>20){
        printf("it is invalid");
        return 0;
    }
    printf("intput array element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter the length 2nd array:");
    scanf("%d",&m);
    if(m>20){
        printf("it is invalid");
        return 0;
    }
    printf("input array element\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    int x=0,y=0;
    for(int i=0;i<m+n;i++){
        if(x<n && y<m){
            if(a[x]<b[y]){
                c[i]=a[x];
                x++;
            }
            else if(a[x]>b[y]){
                c[i]=b[y];
                y++;
            }
            else{
                c[i]=a[x];
                c[i+1]=b[y];
                x++;
                y++;
            }
        }
        else if(m>n){
            c[i]=b[y];
            y++;
        }
        else{
            c[i]=a[x];
            x++;
        }
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}