#include<stdio.h>
int main(){
    int n,sum=0,number;
    printf("enter the value of n= ");
    scanf("%d",&n);
    while(n!=0){
        number=n%10;
        sum=sum+number;
        n=n/10;

    }
    printf("sum of number=%d",sum);
    return 0;
}