#include<stdio.h>
int main(){
int n,ans=0,base=1;

printf("enter any number: ");
scanf("%d",&n);
while(n>0){
int rem=n%10;
ans=ans+(rem*base);
base=base*2;
n =n/10;

}
printf("%d",ans);

  return 0;
}