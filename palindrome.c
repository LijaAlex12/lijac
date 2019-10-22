#include<stdio.h>
void main(){
  int n,m,a,s=0;
  printf("enter any no");
  scanf("%d",&n);
  m=n;
  while(n>0){
    a=n%10;
    s=(s*10)+a;
    n=n/10;
  }
  if(s==m)
  printf("palindrome");
  else
  printf("not palindrome");
}
