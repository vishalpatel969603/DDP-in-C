#include<stdio.h>
int main(){
//Student passed or failed (mark>30 is pass marks<=30 is fail)
   /* int marks;
    printf("enter the number = ");
    scanf("%d",&marks);
    if(marks <= 30 ){
        printf("fail \n");
    }
    else if (marks > 30 && marks <= 100){
        printf("pass\n");
    }
    else {
         printf("wrong marks");
     }  */

     
     // mark <30 is C, 30<=mark<70 is B, 70<=mark<90 is A,90<=mark<=100 is A+
    
     // int marks;
    // printf("enter the number=");
    // scanf("%d",&marks);
    // if(marks<30){
    //     printf("Grade of C");
    // }
    // else if(marks>=30 && marks<70){
    //     printf("grade of B");
    // }
    // else if (marks>=70 && marks<90){
    //     printf("grade of A");
    // }
    // else if (marks>=90 && marks<100){
    //     printf("grade of A+");       
    // }
    // else{
    //     printf("wrong marks");
    // }
    
    /*int (x=2);
    if (x=1){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    } */

     // write a program to find if a chracter entered by user is upper case or not.
      char ch;
      printf("enter character :");
      scanf("%c",&ch);
      if(ch>='A' && ch<='Z'){
        printf("upper case\n");
      }
      else if (ch>='a' && ch<='z'){
        printf("lower case\n");
      }
      else{
        printf("not english letter\n");
      }
    return 0;
}