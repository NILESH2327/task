#include<stdio.h>
int main(){
  int n;
  
  scanf("%d",&n);
 printf("enter any number: ");
 int reverse=0;
 while(n>0){
   int rem=n%10;
   reverse= ((reverse*10)+rem);
   n=n/10;

 }
printf("%d",reverse);
  


  return 0;
}