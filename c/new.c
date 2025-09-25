#include<stdio.h>
int main(){
int n; 
printf("enter your number: ");
scanf("%d",&n);
for(int i=2; i<n; i++){
if(n%i==0)
  printf("no");

 else
  printf("yes");
  break;



}



  return 0;
}