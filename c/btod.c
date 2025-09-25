#include<stdio.h>
int main(){

int n,base=1, dec=0;
printf("enter any binary number::");
scanf("%d",&n);

while(n>0){
  int rem=n%10;
  dec =dec+(rem*base);
  // base =base*2
  
   base =base*2;
   n=n/10;

}
printf("%d",dec);

  return 0;
}