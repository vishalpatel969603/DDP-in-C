#include<stdio.h>
int main(){
    int n,a = 0;
    printf("enten the value of n=");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        a=1;
        break;
        }

    }
    if(n==1){
        printf("co prime\n");
    }
    else if(a==0){
        printf("prime number\n");
    }
    else{ printf("composite number");}

return 0;
}