#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    // int i=0;
    // while (i<=n){
    //     printf("%d\n",i);
    //     i++;
    //}

    //from for loop
    // for(int i=0; i<=n;i++){
    //     printf("%d\n",i);
    // }
    //from Do while loop
    int i=1;
    do{
        printf("%d\n",i);
        i++;   
    }while(i<=n);
    return 0;
}