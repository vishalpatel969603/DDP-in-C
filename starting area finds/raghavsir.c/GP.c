#include<stdio.h>
int main(){
      int n,a=1;
     printf("enter the value of n =");
     scanf("%d",&n);
     //1 2 4 8 16 32
     for( int i=1;i<=n;i++){
        printf("%d\n",a);
         a=a*2;
     }
    return 0;
}