#include<stdio.h>
void main(){
  int sum=0,i,n;
  printf("enter any no");
  scanf("%d",&n);
  for(i=1;i<n;i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  if(sum==n)
  printf("perfect no");
  else
  printf("not perfect");

}
