#include<stdio.h>
int main(){

int n,base=1,bin=0;
printf("enter a decimal number: ");
scanf("%d",&n);
while(n>0){
int rem=n%2;
bin= bin+(rem*base);
base =base*10;
n=n/2;


}
printf("%d",bin);


  return 0;
}