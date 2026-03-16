#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n= ");
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i>=j)
            printf("%d ",j);
        else printf("  ");
        }
        printf("\n");
    }
    return 0;
}