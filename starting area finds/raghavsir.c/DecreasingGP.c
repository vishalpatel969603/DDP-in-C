#include<stdio.h>
int main (){
    int a=100;
    int n;
    printf("enter the value of n =");
     scanf("%d",&n);
     for( int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a/2;
     }
    return 0;
}