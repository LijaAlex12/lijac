#include<stdio.h>
void main(){
  int i=0,n,sum=0,avg;
  printf("enter range");
  scanf("%d\n",&n);
  while(i<n){
    i=i+1;
    sum=sum+i;
  }
  avg=sum/n;
  printf("%d\n",avg);
}
