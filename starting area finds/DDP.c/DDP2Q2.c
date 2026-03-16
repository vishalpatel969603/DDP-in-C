#include<stdio.h>
int main(){
    int n,a=0,number;
    printf("enter the value of n= ");
    scanf("%d",&n);
    while(n!=0){
        number=(n%10);
        a=a*10+number;
        n=n/10;
       
    }
    printf("revers number= %d",a);
    return 0;
}