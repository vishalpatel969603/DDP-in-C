#include<stdio.h>
int main(){
    //sum of first n Natural number and print them in reverse.
    int n,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
     sum=sum+i;
      printf("%d\n",i);
    }
     printf("sum is = %d\n",sum);
     
    //  for(int i=n; i>=1;i--){
    //     printf("%d\n",i);
    //  }
    return 0;
}