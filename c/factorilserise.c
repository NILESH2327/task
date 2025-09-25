#include <stdio.h>

int main(){
  float sum=0.00;
  int n;
  printf("enter up to n term :");
  scanf("%d",&n);
  float fact =1;  //fact must be only float not int 
  for(int i=1; i<=n; i++){
      fact=fact*(i+1);
      sum=sum+(i/fact);  
  }
printf("%f",sum);
  return 0;
}
