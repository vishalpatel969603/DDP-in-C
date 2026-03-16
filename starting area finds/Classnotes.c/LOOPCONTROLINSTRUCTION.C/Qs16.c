#include<stdio.h>
int main(){
// print the table of a number input by the user.
   /*int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
   for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
   }   */
    
   // keep taking number as input from user until user enters an odd number.
    int n; 
   for(;;){
    printf("Enter the value of n=");
    scanf("%d",&n);
    if(n%2!=0){
        printf("odd number");
        break;
    }
    else{
        printf("even number");
    }
   }
   
    return 0;
}