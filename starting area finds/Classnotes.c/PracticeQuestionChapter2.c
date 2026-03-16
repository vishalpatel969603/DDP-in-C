#include<stdio.h>
//#include<math.h>
int main(){
    // int a,b;
    // printf("enter the value is a=");
    // scanf("%d",&a);
    //  b=(a%2==0);
    // printf("true%d",a%2==0);
         
    //print 1(true) 0r 0(false) for following statements
    // if it's sunday & it 's snowing-> true(1)
   
    /* int issunday=1;
    int issnowing=1;
    printf("true%d\n",(issunday&&issnowing));
   */

     // if a number is greater than 9 &less than 100->true

    int a,b;
    printf("enter the value is a=");
    scanf("%d",&a);
    b = (a>9)&&(100>a);
    printf("true%d",b);
    return 0;
}
