#include <stdio.h>

int main() {
    int i, n, a=-1, b=1,c;
    printf("enter the length: ");
    
    scanf("%d",&n);
    i=1;
    while(i<=n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}

