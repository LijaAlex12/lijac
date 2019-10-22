#include<stdio.h>
void main(){
  int i=0,n;
  printf("enter no of even numbers");
  scanf("%d",&n);
  while(i<=n){
    if(i%2==0){
      printf("%d\n",i);

    }i++;

  }
}
