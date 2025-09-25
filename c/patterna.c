#include<stdio.h>
int main(){
int n;
printf("enter a number: ");
scanf("%d",&n);
 int p=0;
for(int i=1; i<=n; i++){
  for(int j=1; j<=i; j++){
    
    p++;
    printf("%d",p);
  }
  printf("  \n");
}


return 0;

}