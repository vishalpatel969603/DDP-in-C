#include<stdio.h>
int main(){
int a,b;

printf("enter the value of a=");
scanf("%d",&a);
 printf("enter the value of b=");
 scanf("%d",&b);
for(int i=a;i<=b;i++){
    if(i%3==0){
        printf("%d\n",i);
    }
}
return 0;

}