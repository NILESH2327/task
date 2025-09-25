#include<stdio.h>
int main(){
// code for a armstrome series ;// 153 = 1*1*1+5*5*5+3*3*3=153;
int n, value, arm=0 ,r;

printf("enter any number :  ");
scanf("%d",&n);

 value=n;
while(n>0){
  r= n%10;
  arm =(r*r*r)+arm;
  n= n/10;

}
if(value == arm){
  printf("armstrome number");
}
else{
  printf("not armstrom number");
}


  return 0;

}