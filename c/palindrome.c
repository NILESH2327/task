#include<stdio.h>
#include<conio.h>
int main(){
int n, c, pm=0, rem;
printf("enter any number:: ");
scanf("%d",&n);
c=n;
while(n>0){
  rem =n%10;
  pm = rem+(pm*10);
  n=n/10;

}
if(c==pm){
printf("palindrome");


}
else{
  printf("not");
}

  return 0;

}