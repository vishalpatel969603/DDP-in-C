#include <stdio.h>
int main(){
// int a;
//  printf("enter the value of a=");
//  scanf("%d",&a);
//  if(a>15){
//      printf("number is greater than 15");}
// if(a<=15){
//      printf("number is less than 15");}



// int a,b,c;
//  printf("enter the value of=");
//  scanf("%d",&a);
//   printf("enter the value of=");
//   scanf("%d",&b);
//    printf("enter the value of=");
//    scanf("%d",&c);
//    if(a>b&&a>c){
// printf("first number is greatest a");
//    }
//    else if(b>a&&b>c){
//     printf("second number is greatest b ");
//    }
//    else{
//     printf("third number is greatest c");
//    }


      int a,b,c;
      printf("enter the value of a=");
      scanf("%d",&a);
      printf("enter the value of b=");
      scanf("%d",&b);
      printf("enter the value of c=");
      scanf("%d",&c);
      if(a>b){
          if(a>c){
          printf("A is greater than");
          }
          else{
          printf("C is greater than");
          }

        }
      else{
        if(b>c){
          printf("B is greater than");
          }
          else{
          printf("C is greater than");
          }

    }



    
   return 0;

}
