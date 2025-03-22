#include<stdio.h>
int main (){
    int array[5]={22,33,44,55,66};
    printf("%d\n",array[3]);
    printf("%d\n",array[5]);
    printf("%u\n",array);
    printf("%u\n",array+1);
    printf("%u\n",array+2);
    printf("%u",*array);
    printf("\n%u",*array+1);
    printf("\n%u",*array+2);
    
    printf("\n%u",*(array+1));
    printf("\n%u",*(array+3));
    return 0;

}