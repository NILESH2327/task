#include<stdio.h>

int main(){
 // print a fabonacci series
 int n, a=0, b=1 ,c;
  printf("enter a up to n term :: ");
  scanf("%d", &n);
for(int i =1; i<=n; i++){
  printf("%d ", a);
  c= a+b;
  a=b;
  b=c;

} 




  return 0;
}