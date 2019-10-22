#include<stdio.h>
void main(){
  int n,m,sum=0,a;


  printf("enter a number");
  scanf("%d",&n);
  m=n;
  while(n>0){
    a=n%10;
    sum=sum+a;
    n=n/10;

  }
  printf("%d",sum);

}
