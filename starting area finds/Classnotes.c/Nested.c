#include<stdio.h>
int main(){
    int num;
    printf("enter the value :");
    scanf("%d",&num);
    if(num>=0){
        printf("positive \n");    
        if(num %  2 == 0){
            printf("even number \n");
        }
        else{
            printf("odd number \n");
        }
    } 
    else{
        printf("negative \n");
    } 
    return 0; 
}