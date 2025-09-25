#include<stdio.h>
int main(){
//write table any number
int n;
printf("enter any number: ");
scanf("%d",&n);

for(int i=1; i<=10; i++){
  int table=n*i;
printf("%d\n",table);
}




  return 0;
}